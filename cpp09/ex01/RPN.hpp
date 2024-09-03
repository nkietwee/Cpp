/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 01:11:10 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/03 17:57:00 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stdlib.h>
# include <sstream>
# include <vector>
# include <stack>

class RPN
{
	public:
		RPN();
		~RPN();
		RPN&  operator=(const RPN &other);
		RPN(const RPN &other);
		
		int init_data(std::string av1);
		int cal(std::string av1);
		
		bool isallnbr(std::string str);
		bool isallsym(std::string str);

	private:
		std::stack<int> _stack;
};



#endif