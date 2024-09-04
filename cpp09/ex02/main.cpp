/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:57:57 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/04 14:51:15 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	(void)av;
	try
	{
		if (ac < 3)
		{
			std::cerr << "[Expected Input] ./PmergeMe 3 5 9 7 4" << std::endl;
			return (false);
		}
		PmergeMe m;
		
		m.chk_asd(ac, av);
		m.cal(ac, av);
		// M.init_vec(ac, av);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}