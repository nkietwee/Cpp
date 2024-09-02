/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 01:14:59 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/03 02:29:08 by nkietwee         ###   ########.fr       */
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

void	RPN::ft_prt_vec_int(std::vector<int> vec)
{
	for (unsigned long i = 0; i < vec.size(); i++)
		std::cout << "|" << vec[i] << "|" ;
	std::cout << std::endl;
}

void	RPN::ft_prt_vec_str(std::vector<std::string> vec)
{
	for (unsigned long i = 0; i < vec.size(); i++)
		std::cout << "|" << vec[i] << "|" ;
	std::cout << std::endl;
}

std::vector<std::string> RPN::ft_split(const std::string &str, char delimiter)
{
	std::vector<std::string> tokens;
	std::string token;
	std::stringstream ss(str);
	
	while (std::getline(ss, token, delimiter))
		tokens.push_back(token);
	return tokens;
}

bool RPN::isallnbr(std::string str)
{
	unsigned long i;

	i = 0;
	while (i < str.length())
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
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
	unsigned long i;

	i = 0;
	while (i < str.length())
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
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


void	RPN::init_data(std::string av1)
{
	unsigned long i;
	
	this->_input = ft_split(av1, ' ');
	i = 0;
	// valid input
	while (i < this->_input.size())
	{
		if (i % 2 == 0 && i != 0) //even -> sym
		{
			if (isallsym(this->_input[i]) == false)
			{
				std::cout << "Error input" << std::endl;
				break;
			}
		}
		else
		{
			if (isallnbr(this->_input[i]) == false)
			{
				std::cout << "Error input" << std::endl;
				break;
			}
			
		}
		i++;
	}
	// ft_prt_vec_int(this->_input);
	// ft_prt_vec_str(sp_vec);
}

int RPN::cal()
{
	unsigned long i;
	unsigned long len;
	int a;
	int b;
	char sym;
	
	i = 0;
	a = 0;
	b = 0;
	sym = '+';
	len = this->_input.size();
	if (len < 3)
	{
		std::cout << "[Error input] : len" << std::endl;
		return (false);
	}
	while (i < this->_input.size())
	{
		if (i == 0)
			a = atoi(this->_input[0].c_str());
		else if (i == 1)
			b = atoi(this->_input[1].c_str());
		else if (i % 2 == 0 && i != 0) // sym
			sym = this->_input[i][0];
		else
			b = atoi(this->_input[i].c_str());
		if (sym == '+' && i % 2 == 0 && i >= 2)
			a = a + b;
		else if (sym == '-' && i % 2 == 0 && i >= 2)
			a = a - b;
		else if (sym == '*' && i % 2 == 0 && i >= 2)
			a = a * b;
		else if (sym == '/' && i % 2 == 0 && i >= 2)
			a = a / b;
		i++;
	}
	return (a);
}
