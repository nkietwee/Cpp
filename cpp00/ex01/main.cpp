/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:51:34 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/16 20:04:36 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
// #include "Contact.hpp"

int main()
{
	PhoneBook	phone;
	// ontact		test;
	int			i;
	std::string c;

	i = 0;
	while (1)
	{
		// system("Color 0A");
		std::cout << BLUE << "input : " << RESET;
		std::getline(std::cin, c);
		phone.run(c);
		// if (c == "add")
		// {
		// 	std::cout << "add" << std::endl ;
		// }
		// std::cout << c;
		// ct.setfirstname("testname");
	}
	return (0);
}