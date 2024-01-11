/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:08:17 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/08 15:54:53 by nkietwee         ###   ########.fr       */
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
		Animal();
		Animal(const Animal &am);
		Animal(std::string name);
		Animal& operator=(const Animal &am);
		~Animal();
		void	makeSound() const ;
		std::string	getType() const ;
	protected:
		std::string type;
} ;

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &d);
		Dog& operator=(const Dog &d);
		~Dog();
		void	makeSound() const;
		std::string	getType() const;
} ;

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &c);
		Cat&	operator=(const Cat &c);
		~Cat();
		void	makeSound() const;
		std::string	getType() const;
} ;
