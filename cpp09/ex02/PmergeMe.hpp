/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:58:04 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/04 13:27:21 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <stdlib.h>
# include <sstream>
# include <vector>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe&  operator=(const PmergeMe &other);
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		
		void init_vec(int ac, char **av);
		void chk_asd(int len, char **av);
		bool isallnbr(std::string str);
		
		void prt_vec();
		
		std::vector<std::string> ft_split(const std::string &str, char delimiter);

	private:
		std::vector<int> _vector[5000];
		int _pair;
};





#endif