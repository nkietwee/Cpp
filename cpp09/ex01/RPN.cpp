/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 01:14:59 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/03 17:57:42 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	// std::cout << "Construct called" << std::endl;
}

RPN::~RPN()
{
	// std::cout << "Deconstruct called" << std::endl;
}

RPN&  RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		this->_stack = other._stack;
	}
	return (*this);
}

RPN::RPN(const RPN &other) : _stack(other._stack)
{
	(void)other;
}

bool RPN::isallnbr(std::string str)
{
	unsigned long i;

	i = 0;
	while (i < str.length())
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			i++;
			continue;
		}
		else
			return (false);
		i++;
	}
	return (true);
}

bool RPN::isallsym(std::string str)
{
	unsigned long len;
	
	len = str.length();
	if (len != 1)
		return (false);
	if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/')
		return (true);
	return (false);
}

int	RPN::init_data(std::string av1)
{
	int len = 0;
	std::stringstream ss(av1);
	std::string word;
	std::string tmp;
	while (!ss.eof())
	{
		getline(ss, word, ' ');
		if ((isallsym(word) == false) && isallnbr(word) == false)
			throw std::runtime_error("[Error] Input");
		len++;
	}
	if (len < 3)
		throw std::runtime_error("[Error] : len too short");
	return (len);
}

int RPN::cal(std::string av1)
{
	int i;
	int a;
	int b;
	int len;
	
	i = 0;
	a = 0;
	b = 0;
	len = init_data(av1);
	std::stringstream ss(av1);
	std::string word;
	while (i < len)
	{		
		getline(ss, word, ' ');
		if (isallnbr(word) == true) // nbr
			this->_stack.push(atoi(word.c_str()));
		else // sym
		{
			if (this->_stack.size() < 2)
				throw std::runtime_error("[Error] : Not enough operands for operation");
			a = this->_stack.top();
			this->_stack.pop();
			b = this->_stack.top();
			this->_stack.pop();
			if (word[0] == '+')
				this->_stack.push(b + a);
			else if (word[0] == '-')
				this->_stack.push(b - a);
			else if (word[0] == '*')
				this->_stack.push(b * a);
			else if (word[0] == '/')
			{
				if (a == 0)
					throw std::runtime_error("[Error] : Division by zero");
				this->_stack.push(b / a);
			}
		}
		i++;
	}
	if (this->_stack.size() != 1)
		throw std::runtime_error("[Error] : Invalid RPN expression");
	return (this->_stack.top());
}

// int RPN::cal()
// {
// 	unsigned long i;
// 	unsigned long len;
// 	int a;
// 	int b;
// 	char sym;
	
// 	i = 0;
// 	a = 0;
// 	b = 0;
// 	sym = '+';
// 	len = this->_input.size();
// 	if (len < 3)
// 	{
// 		std::cout << "[Error input] : len" << std::endl;
// 		return (false);
// 	}
// 	while (i < this->_input.size())
// 	{
// 		if (i == 0)
// 			a = atoi(this->_input[0].c_str());
// 		else if (i == 1)
// 			b = atoi(this->_input[1].c_str());
// 		else if (i % 2 == 0 && i != 0) // sym
// 			sym = this->_input[i][0];
// 		else
// 			b = atoi(this->_input[i].c_str());
// 		if (sym == '+' && i % 2 == 0 && i >= 2)
// 			a = a + b;
// 		else if (sym == '-' && i % 2 == 0 && i >= 2)
// 			a = a - b;
// 		else if (sym == '*' && i % 2 == 0 && i >= 2)
// 			a = a * b;
// 		else if (sym == '/' && i % 2 == 0 && i >= 2)
// 			a = a / b;
// 		i++;
// 	}
// 	return (a);
// }
