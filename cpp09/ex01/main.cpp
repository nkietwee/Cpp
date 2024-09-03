/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 01:11:03 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/03 17:28:09 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char**av)
{
	try
	{
		std::string av1;
		if (ac != 2)
		{
			std::cerr << "Example Input : <./RPN ""8 9 * 9 - 9 - 9 - 4 - 1 +"">" << std::endl;
			return (false);
		}
		RPN res;	
		av1 = av[1];
		// res.init_data(av1);
		std::cout << res.cal(av[1]) << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}