/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:59:27 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/18 01:53:45 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			for (int j = 0; j < str.length(); j++)
			{
				std::cout << (char)toupper(av[i][j]);
			}
		}
	}
	std::cout << std::endl;
}