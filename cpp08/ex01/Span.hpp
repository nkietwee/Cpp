/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:22:00 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/31 00:52:09 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

#include <algorithm>
#include <stdexcept>
#include <limits.h>

class Span
{
	public :
		Span(unsigned int N);
		void			addNumber(int nbr);
		int				shortestSpan();
		unsigned int				longestSpan();
		unsigned int	getSizeCurrent();
		unsigned int	findMin();
		unsigned int	findMax();
		int				ft_abs(int a);
		void			ft_prtvec(std::vector<int> vec);
		std::vector<int> ft_cpyvec();
		void addRangeNumber(int start, int end);
		int ft_checkerr();

		
	private:
		std::vector<int> _vec;
		unsigned int _size_current;
		unsigned int _size_total;
    // If there are no numbers stored,
// or only one, no span can be found. Thus, throw an exception.
};

#endif