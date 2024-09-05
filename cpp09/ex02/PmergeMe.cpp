/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:50:30 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/05 01:19:49 by nkietwee         ###   ########.fr       */
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

void PmergeMe::merge_insert_vec(int ac, char **av)
{
	init_vec(ac, av);
	sortVec_asd();
	merge_first_value_vec();
	insert_sort_vec();
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
	unsigned int i;
	
	i = 0;
	while (i < this->_pair)
	{
		std::cout << "vec : " << this->_vector[i].first << " " << this->_vector[i].second << std::endl;
		i++;
	}
}

void PmergeMe::prt_vec_merge()
{
	unsigned int i;
	
	i = 0;
	this->_len_pre = this->_pre_vec.size();
	while (i < this->_len_pre)
	{
		std::cout << this->_pre_vec[i] << " " ;
		i++;
	}
	std::cout << std::endl;

	// std::cout << "vector post : " << std::endl;
	// i = 0;
	// this->_len_post = this->_post_vec.size();

	// while (i < this->_len_post)
	// {
	// 	std::cout << this->_post_vec[i] << " " ;
	// 	i++;
	// }
	// std::cout << std::endl;
}

void PmergeMe::prt_deque_pair_t()
{
	unsigned int i;
	
	i = 0;
	while (i < this->_pair)
	{
		std::cout << "queue : " << this->_deque[i].first << " " << this->_deque[i].second << std::endl;
		i++;
	}
}

void PmergeMe::prt_deque_merge()
{
	unsigned int i;
	
	i = 0;
	this->_len_pre = this->_pre_dq.size();
	this->_len_post = this->_post_dq.size();
	while (i < this->_len_pre)
	{
		std::cout << this->_pre_dq[i] << " " ;
		i++;
	}
	std::cout << std::endl;

	std::cout << "deque post : " << std::endl;
	i = 0;
	while (i < this->_len_post)
	{
		std::cout << this->_post_dq[i] << " " ;
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
	std::cout << "Before : " ;
	i = 1;
	while (i < ac)
	{
		std::cout << atoi(av[i]) << " ";
		i++;
	}
	std::cout << std::endl;
}

void PmergeMe::sortVec_asd()
{
	unsigned int i;
	
	i = 0;
	while (i < this->_pair - 1)
	{
		if (this->_vector[i].first <= this->_vector[i + 1].first)
			i +=1 ;
		else // morethan
		{
			std::swap(this->_vector[i], this->_vector[i + 1]);
			i = 0;
		}
	}
}

void PmergeMe::merge_first_value_vec()
{
	unsigned int i;

	i = 0;
	while (i < this->_pair)
	{
		this->_pre_vec.push_back(this->_vector[i].first);
		this->_post_vec.push_back(this->_vector[i].second);
		i++;
	}
}

void PmergeMe::insert_sort_vec()
{
	unsigned int i;
	int pos;

	i = 0;
	this->_len_post = this->_post_vec.size();
	while (i < this->_len_post)
	{
		pos = find_pos_vec(this->_post_vec[i]);
		if (pos != -1)
			this->_pre_vec.insert(this->_pre_vec.begin() + pos + 1, this->_post_vec[i]);
		i++;
	}
	this->_post_vec.clear();
	std::cout << "After : ";
	prt_vec_merge();
}

int PmergeMe::find_pos_vec(unsigned int target)
{
	unsigned int i;

	i = (this->_pre_vec.size()) - 1;
	while (i)
	{
		if (this->_pre_vec[i] <= target)
			return (i);
		i--;
	}
	return (-1);
}

void PmergeMe::merge_insert_deque(int ac, char **av)
{
	init_deque(ac, av);
	sortDeque_asd();
	merge_first_value_deque();
	insert_sort_deque();
}

void PmergeMe::init_deque(int ac, char **av)
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
			this->_deque.push_back((pair_t){num_a, num_b});
		else if (num_a >= num_b && num_b != 0)
			this->_deque.push_back((pair_t){num_b, num_a});
		else
			this->_deque.push_back((pair_t){num_a, 0});
		i += 2;
	}
}

void PmergeMe::sortDeque_asd()
{
	unsigned int i;

	i = 0;
	std::deque<pair_t> _queue_tmp;

	while (i < this->_pair - 1)
	{
		if (this->_deque[i].first <= this->_deque[i + 1].first)
			i += 1;
		else
		{
			std::swap(this->_deque[i], this->_deque[i + 1]);
			i = 0;
		}
	}
}

void PmergeMe::merge_first_value_deque()
{
	unsigned int i;

	i = 0;
	while (i < this->_pair)
	{
		this->_pre_dq.push_back(this->_deque[i].first);
		this->_post_dq.push_back(this->_deque[i].second);
		i++;
	}
}

void PmergeMe::insert_sort_deque()
{
	unsigned int i;
	int pos;

	i = 0;
	this->_len_post = this->_pre_dq.size();
	while (i < this->_len_post)
	{
		// find_pos
		pos = find_pos_deque(this->_pre_dq[i]);
		if (pos != -1)
			this->_pre_dq.insert(this->_pre_dq.begin() + pos + 1, this->_pre_dq[i]);
		i++;
	}
	this->_post_dq.clear();
}

int PmergeMe::find_pos_deque(unsigned int target)
{
	unsigned int i;

	i = (this->_pre_dq.size()) - 1;
	while (i)
	{
		if (this->_pre_dq[i] <= target)
			return (i);
		i--;
	}
	return (-1);
}