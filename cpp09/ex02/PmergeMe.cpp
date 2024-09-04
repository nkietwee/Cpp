/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:50:30 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/04 16:51:13 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:05:24 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/04 14:28:26 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		this->_vector = other._vector;
		this->_pair = other._pair;
	}
	return (*this);
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void)other;
}

PmergeMe::~PmergeMe()
{}

void PmergeMe::chk_asd(int len, char **av)
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

void PmergeMe::cal(int ac, char **av)
{
	init_vec(ac, av);
	sort_asd();
	merge_first_value();
}

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

void PmergeMe::prt_vec_pair_t()
{
	int i = 0;
	while (i < this->_pair)
	{
		std::cout << "vec : " << this->_vector[i].first << " " << this->_vector[i].second << std::endl;
		i++;
	}
}

void PmergeMe::prt_vec_merge()
{
	int i = 0;
	int len_pre = this->_tt / 2;
	int len_post = this->_tt / 2;
	
	std::cout << "vector pre : " << std::endl;
	while (i < len_pre)
	{
		std::cout << this->_pre[i] << " " ;
		i++;
	}
	std::cout << std::endl;

	std::cout << "vector post : " << std::endl;
	i = 0;
	while (i < len_post)
	{
		std::cout << this->_post[i] << " " ;
		i++;
	}
	std::cout << std::endl;
}

void PmergeMe::init_value(int ac)
{
	this->_tt = ac - 1;
	if (this->_tt % 2 == 0)
		this->_pair = this->_tt / 2;
	else
		this->_pair = (this->_tt / 2) + 1;
}


void PmergeMe::init_vec(int ac, char **av)
{
	int i = 1;
	unsigned int num_a = 0;
	unsigned int num_b = 0;
	while (i < ac)
	{
		num_a = atoi(av[i]);
		if (av[i + 1]) // protect last arg
			num_b = atoi(av[i + 1]);
		else
			num_b = 0;
		if (num_a < num_b)
			this->_vector.push_back((pair_t){num_a, num_b});
		else if (num_a >= num_b && num_b != 0)
			this->_vector.push_back((pair_t){num_b, num_a});
		else
			this->_vector.push_back((pair_t){num_a, 0});
			
		i += 2;
	}
	// std::cout << std::endl;
	// prt_vec();
}

void PmergeMe::sort_asd()
{
	int i;
	
	i = 0;
	while (i < this->_pair - 1)
	{
		if (this->_vector[i].first < this->_vector[i + 1].first)
			i+=1;
		else // morethan
		{
			std::swap(this->_vector[i], this->_vector[i + 1]);
			i = 0;
		}
	}
}

void PmergeMe::merge_first_value()
{
	int i;

	i = 0;
	std::cout << "before" << std::endl;
	prt_vec_pair_t();
	while (i < this->_pair)
	{
		this->_pre.push_back(this->_vector[i].first);
		this->_post.push_back(this->_vector[i].second);
		i++;
	}
	std::cout << std::endl;
	std::cout << "after" << std::endl;
	prt_vec_merge();
	
}