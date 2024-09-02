/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 01:11:10 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/03 02:01:15 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stdlib.h>
# include <sstream>
# include <vector>

class RPN
{
	public:
		RPN();
		~RPN();
		
		void init_data(std::string av1);
		int cal();
		
		bool isallnbr(std::string str);
		bool isallsym(std::string str);

		
		std::vector<std::string> ft_split(const std::string &str, char delimiter);
		
		void	ft_prt_vec_str(std::vector<std::string> vec);
		void	ft_prt_vec_int(std::vector<int> vec);


	private:
		// std::vector<int> _input;
		std::vector<std::string> _input;
};



#endif