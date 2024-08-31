/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:32:45 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/30 17:40:11 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Don't forget to check size = 0 and 1
Span::Span(unsigned int N) : _size_total(N)
{
}

void Span::addNumber(int nbr)
{
	std::string err_msg = "Can't add nbr";
	// std::cout << "Size : " << getSizeCurrent() << std::endl;
	// std::cout << "N : " << this->_size_total << std::endl;

	if (getSizeCurrent() > this->_size_total - 1)
		throw (err_msg);
	this->_vec.push_back(nbr);
}
 
unsigned int Span::getSizeCurrent()
{
	this->_size_current = this->_vec.size();
	return (this->_size_current);
}

unsigned int Span::findMin()
{
	unsigned int tt = this->_vec.size();
	unsigned int min = this->_vec.at(0);
	unsigned int i = 1;
	while (i < tt)
	{
		// std::cout << this->_vec.at(i) << std::endl;
		if (min > this->_vec.at(i))
			min = this->_vec.at(i);
		i++;
	}
	return (min);
}

unsigned int Span::findMax()
{
	unsigned int tt = this->_vec.size();
	unsigned int max = this->_vec.at(0);
	unsigned int i = 1;
	while (i < tt)
	{
		// std::cout << this->_vec.at(i) << std::endl;
		if (max < this->_vec.at(i))
			max = this->_vec.at(i);
		i++;
	}
	return (max);
}
int Span::longestSpan()
{
	unsigned int min = findMin();
	unsigned int max = findMax();
	// std::cout << "min : " << min << std::endl;
	// std::cout << "max : " << max << std::endl;
	return (max - min);
}

int	Span::ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

// int Span::shortestSpan()
// {
// 	unsigned int tt = this->_vec.size();
// 	int st_bf;
// 	int st_at;
// 	unsigned int res = 0;
// 	unsigned int i = 0;
// 	int loop = 1;
// 	unsigned int rht = 1;
	// unsigned int j = 0;
	// while (i < tt)
	// {

	// 	st_bf = ft_abs(this->_vec.at(i), this->_vec.at(rht));
	// 	std::cout << "[" << i << ", " << rht << "]" << " st_bf : " << st_bf << std::endl; 
	// 	if (rht == tt - 1)
	// 	{
	// 		std::cout << "Entry loop above" << std::endl << std::endl;
	// 		i = i + 1;
	// 		rht = loop;
	// 		loop++;
	// 	}
	// 	st_at = ft_abs(this->_vec.at(i), this->_vec.at(rht + 1));
	// 	std::cout << "[" << i << ", " << rht + 1 << "]" << " st_at : " << st_at << std::endl; 
	// 	res = ft_abs(st_bf, st_at);
	// 	if (st_bf < st_at)
	// 	{
	// 		if (res < static_cast<unsigned int>(st_bf))
				
	// 		res = st_bf;
	// 	}
	// 	std::cout <<  "res : " << res << std::endl; 
	// 	// if (rht + 2  == tt && rht + 1 == tt - 1)
	// 	// {
	// 	// 	// std::cout << "Entry loop below" << std::endl;
	// 	// 	// std::cout << "[" << i << ", " << rht << "]" << std::endl; 
	// 	// 	i = loop;
	// 	// 	rht = loop;
	// 	// 	loop++;
	// 	// 	std::cout << std::endl;
	// 	// }
	// 	rht++;
	// }
// 	int shortestSpan = -2147483648;
// 	for (size_t i = 1; i < sortedNumbers.size(); ++i)
// 	{
// 		int span = sortedNumbers[i] - sortedNumbers[i - 1];
// 			if (span < shortestSpan)
// 				shortestSpan = span;
// 	}
// 	return (res);
// }

// int Span::shortestSpan()
// {
// 		if (this->_size_total < 2)
// 			throw std::logic_error("Not enough numbers to find a span");

// 		// Sort the vector to easily find the shortest span
// 		std::vector<unsigned int> sortedNumbers = this->_vec;
// 		std::sort(sortedNumbers.begin(), sortedNumbers.end());

// 		// Calculate the shortest span by finding the smallest difference between consecutive numbers
// 		int shortestSpan = 2147483647;
// 		for (size_t i = 1; i < sortedNumbers.size(); ++i) {
// 			int span = sortedNumbers[i] - sortedNumbers[i - 1];
// 			if (span < shortestSpan)
// 				shortestSpan = span;
// 		}

// 		return shortestSpan;
// }

// int Span::shortestSpan()
// {
// 	if (this->_size_total < 2)
// 		throw std::logic_error("Not enough numbers to find a span");
// 	// Calculate the shortest span by finding the smallest difference between consecutive numbers
// 	int shortestSpan = INT_MAX;
// 	int span = 0;
// 	for (unsigned int i = 0 ; i < this->_size_total; i++)
// 	{
// 		for (unsigned int j = i + 1 ; j < this->_size_total; j++)
// 		{
// 			span = ft_abs(this->_vec.at(i) - this->_vec.at(j));
// 			if (span < shortestSpan)
// 				shortestSpan = span;		
// 		}
// 	}
// 	return (shortestSpan);
// }

std::vector<unsigned int> Span::ft_cpyvec()
{
	std::vector<unsigned int> vec_cpy;
	for (std::vector<unsigned int>::iterator i = this->_vec.begin(); i < this->_vec.end(); i++)
	{
		vec_cpy.push_back(*i);
	}
	return (vec_cpy);
}


int Span::shortestSpan()
{
	// sort vector ascending
	std::vector<unsigned int> _vec_cpy = ft_cpyvec();

	sort(_vec_cpy.begin(), _vec_cpy.end());
	unsigned int shortestSpan  = INT_MAX;
	unsigned int span = 0;
	for (unsigned int i = 0; i < this->_size_total - 1; i++)
	{
		span = ft_abs(_vec_cpy.at(i) - _vec_cpy.at(i + 1));
		if (span < shortestSpan)
			shortestSpan = span;
	}
	return (shortestSpan);
}

void Span::ft_prtvec(std::vector<unsigned int> vec)
{
	std::cout << "vec : ";
	for (std::vector<unsigned int>::iterator it  = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}