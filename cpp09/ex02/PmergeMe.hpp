/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:58:04 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/05 00:21:28 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <stdlib.h>
# include <sstream>
# include <vector>
# include <deque>
# include <time.h>
#include <sys/time.h> 

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
		void init_value(int ac);
		void init_vec(int ac, char **av);
		void chk_asd(int len, char **av);
		bool isallnbr(std::string str);
		
		// sort vec
		void merge_insert_vec(int ac, char **av);
		void sortVec_asd();
		void merge_first_value_vec();
		void insert_sort_vec();
		int find_pos_vec(unsigned int target);

		// sort deque
		void merge_insert_deque(int ac, char **av);
		void init_deque(int ac, char **av);
		void sortDeque_asd();
		void merge_first_value_deque();
		void insert_sort_deque();
		int find_pos_deque(unsigned int target);


		void prt_vec_pair_t();
		void prt_vec_merge();
		
		void prt_deque_pair_t();
		void prt_deque_merge();
		
		
		std::vector<std::string> ft_split(const std::string &str, char delimiter);

	private:
		std::vector<pair_t> _vector;
		std::vector<unsigned int> _pre_vec;
		std::vector<unsigned int> _post_vec;
		unsigned int _pair;
		unsigned int _tt;
		unsigned int _len_pre;
		unsigned int _len_post;

		std::deque<pair_t> _deque;
		std::deque<unsigned int> _pre_dq;
		std::deque<unsigned int> _post_dq;

};






#endif