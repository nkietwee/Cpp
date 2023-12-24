/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:47:49 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/21 21:03:29 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string name =  "HI THIS IS BRAIN";
	std::string& ref = name; // keep value
	std::string *ptr; // keep address

	ptr = &name;

	std::cout << "Print address" << std::endl;
	std::cout << "Address of str : " << &name << std::endl;
	std::cout << "Address of ptr : " << ptr << std::endl;
	std::cout << "Address of ref : " << &ref << std::endl;

	std::cout << "Value" << std::endl;
	std::cout << "Value of str : " << name << std::endl;
	std::cout << "Value of ptr : " << *ptr << std::endl;
	std::cout << "Value of ref : " << ref << std::endl;
}