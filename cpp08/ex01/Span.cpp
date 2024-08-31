/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:32:45 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/31 14:43:03 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size_current(0), _size_total(0) 
{
	static_cast<void>(N);
}

void Span::addNumber(int nbr)
{
	std::string err_msg = "Can't add nbr";
	if (getSizeCurrent() > this->_size_total - 1)
		throw (err_msg);
	this->_vec.push_back(nbr);
}
 
unsigned int Span::getSizeCurrent()
{
	this->_size_current = this->_vec.size();
	return (this->_size_current);
}

unsigned int Span::longestSpan()
{
	std::string err_msg_0 = "span size == 0";
	std::string err_msg_1 = "span size == 1";
	
	if (ft_checkerr() == 0)
		throw err_msg_0;
	else if (ft_checkerr() == 1)
		throw err_msg_1;
	std::vector<int> _vec_cpy = ft_cpyvec();
	sort(_vec_cpy.begin(), _vec_cpy.end());
	return (_vec_cpy.at(this->_size_total - 1) - _vec_cpy.at(0));
}

int	Span::ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

std::vector<int> Span::ft_cpyvec()
{
	if (this->_vec.empty())
		return (std::vector<int>());
	std::vector<int> vec_cpy;
	for (std::vector<int>::iterator i = this->_vec.begin(); i < this->_vec.end(); i++)
		vec_cpy.push_back(*i);
	return (vec_cpy);
}

int Span::ft_checkerr()
{
	std::string err_msg_0 = "span size == 0";
	std::string err_msg_1 = "span size == 1";
	this->_size_total = getSizeCurrent();
	if (this->_size_total == 0)
		return (0);
	else if (this->_size_total == 1)
		return (1);
	return (2);
}

int Span::shortestSpan()
{
	std::string err_msg_0 = "span size == 0";
	std::string err_msg_1 = "span size == 1";
	
	if (ft_checkerr() == 0)
		throw err_msg_0;
	else if (ft_checkerr() == 1)
		throw err_msg_1;
	std::vector<int> _vec_cpy = ft_cpyvec();

	// sort vector ascending
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

void Span::ft_prtvec(std::vector<int> vec)
{
	std::cout << "vec : ";
	for (std::vector<int>::iterator it  = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void Span::addRangeNumber(int start, int end)
{
	for (int i = start; i <= end; i++)
		this->_vec.push_back(i);
}
