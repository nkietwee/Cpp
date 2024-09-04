/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:58:04 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/04 15:27:04 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <stdlib.h>
# include <sstream>
# include <vector>

struct pair_t
{
	unsigned int	first, second;
};

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe&  operator=(const PmergeMe &other);
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		
		// check err , init value
		void init_vec(int ac, char **av);
		void chk_asd(int len, char **av);
		bool isallnbr(std::string str);
		
		// sort
		void cal(int ac, char **av);
		void sort_asd();
		
		void prt_vec();
		
		std::vector<std::string> ft_split(const std::string &str, char delimiter);

	private:
		std::vector<pair_t> _vector;
		int _pair;
};






#endif