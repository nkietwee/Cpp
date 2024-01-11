/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:13:51 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/10 20:41:08 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// Define some ANSI color codes
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RESET = "\033[0m";

class Animal
{
	public:
		Animal(void);
		Animal(std::string name);
		Animal(const Animal &Am);
		Animal&	operator= (const Animal &Am);
		~Animal(void);

		void		setType(std::string type_animal);
		// void		setType(std::string type_animal) const;
		// It cannot use const because I declare const class in main function
		std::string	getType(void) const;
		void		makeSound(void) const;

	protected:
		std::string	_type;

};

