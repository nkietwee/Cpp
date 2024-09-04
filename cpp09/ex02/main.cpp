/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:57:57 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/04 14:07:25 by nkietwee         ###   ########.fr       */
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
		PmergeMe M;
		M.chk_asd(ac, av)
		M.init_vec(ac, av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}