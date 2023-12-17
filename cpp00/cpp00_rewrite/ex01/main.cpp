/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:42:45 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/18 01:23:09 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string str;
	PhoneBook PhoneBook;

	while (1)
	{
		std::cout << BLUE << "Input : " << RESET;
		getline(std::cin, str);
		if (str == "ADD" || str == "SEARCH" || str == "EXIT")
			PhoneBook.run(str);
		else
			std::cout << "Type only ADD,  SEARCH and EXIT" << std::endl;
	}
}