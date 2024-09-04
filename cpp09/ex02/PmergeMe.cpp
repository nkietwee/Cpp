/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:05:24 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/04 14:07:12 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		// this->_vector = other._vector;
	}
	return (*this);
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void)other;
}

PmergeMe::~PmergeMe()
{}

bool PmergeMe::isallnbr(std::string str)
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

std::vector<std::string> PmergeMe::ft_split(const std::string &str, char delimiter)
{
	std::vector<std::string> tokens;
	std::string token;
	std::stringstream ss(str);
	
	while (std::getline(ss, token, delimiter))
		tokens.push_back(token);
	return tokens;
}

void PmergeMe::prt_vec()
{
	int i = 0;
	while (i < this->_pair)
	{
		std::cout << "size : " << this->_vector[i].size() << std::endl;
		std::cout << "res [" << i << "] : " ;
		for (unsigned long it = 0; it < this->_vector[i].size(); it++)
		{ 
			std::cout << this->_vector[i][it] << " " ;
		} 
		std::cout << std::endl;
		i++;
	}
}

void chk_asd(int len, char **av)
{
	int	i = 1;
	while (i < len - 1)
	{
		if (atoi(av[i]) < atoi(av[i + 1]))
			i++;
		else
			return ;
	}
	throw std::runtime_error("[Error] assending");
}

void PmergeMe::init_vec(int ac, char **av)
{
	// check ascending
	
	int len;
	// int pair;
	(void)av;
	len = ac - 1;
	if (len % 2 == 0)
		this->_pair = len / 2;
	else
		this->_pair = (len / 2) + 1;
	// std::cout << "pair : " << this->_pair << std::endl;
	int i = 0;
	int loop = 1;
	int ck = 0;
	while (i < this->_pair)
	{
		ck = 0;
		while (ck < 2) // check if pair
		{
			if (av[loop])
			{
				// std::cout << "av : " << i << "|" << av[loop] << std::endl;
				this->_vector[i].push_back(atoi(av[loop]));
			}
			loop++;
			ck++;
		}
		// std::cout << std::endl;
		i++;
	}
	prt_vec();
}