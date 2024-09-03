/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 01:11:03 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/03 14:50:48 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char**av)
{
	try
	{
		std::string av1;
		if (ac != 2)
			throw std::runtime_error("Example Input : <./RPN ""8 9 * 9 - 9 - 9 - 4 - 1 +"">");
		RPN res;	
		av1 = av[1];
		res.init_data(av1);
		std::cout << res.cal() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}