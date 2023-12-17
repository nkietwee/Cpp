/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:11:41 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/09 15:11:46 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

// using namespace std;

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;
	else
	{
		for (int i = 1; i < ac ; i++)
		{
			for (int j = 0; j < strlen(av[i]); j++)
			{
				std::cout << (char)toupper(av[i][j]);
			}
		}
		std::cout << std::endl;
	}
}























