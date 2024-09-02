/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:10:49 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/03 00:59:34 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
 

int main(int ac, char **av) 
{ 
	(void)av;
	try
	{
		if (ac != 2)
			throw ("Error: could not open file.");
		BitcoinExchange btc;
		btc.init_table();
		// btc.ft_prtmap(btc.ft_getmap_table());
		btc.ft_prt_value(av[1]);
	}	
	catch(const char *err_msg)
	{
		std::cerr << err_msg << std::endl;
	}
	return 0; 
}
