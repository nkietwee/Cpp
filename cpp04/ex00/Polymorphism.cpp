/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:08:12 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/08 03:51:21 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphism.hpp"

/*Animal*/
Animal::Animal()
{
	std::cout << BLUE << "[Animal] Construct" << RESET << std::endl;
}

Animal::Animal(const Animal &am)
{
	std::cout << BLUE << "[Animal] Copy constructor" << RESET << std::endl;
	*this = am;
}
Animal& Animal::operator=(const Animal &am)
{
	std::cout << BLUE << "[Animal] Copy assignment operator called" << RESET << std::endl;
	*this = am;
	return(*this);
}

Animal::~Animal()
{
	std::cout << BLUE << "[Animal] Deconstruct" << RESET << std::endl;
}
void	Animal::makeSound() const
{
	std::cout << BLUE << "[Animal] make sound" << RESET << std::endl;
}

std::string	Animal::getType() const
{
	std::string name;

	name = "[Animal]";
	// std::cout << BLUE << "Animal" << RESET << std::endl;
	return(name);
}

/*Dog*/
Dog::Dog()
{
	std::cout << GREEN << "[Dog] Construct" << RESET << std::endl;
}
Dog::Dog(const Dog &d)
{
	std::cout << GREEN << "[Dog] copy constructor" << RESET << std::endl;
	*this = d;
}
Dog&	Dog::operator=(const Dog &d)
{
	std::cout << GREEN << "[Dog] copt assignment operator called" << RESET << std::endl;
	*this = d;
	return(*this);
}

Dog::~Dog()
{
	std::cout << GREEN << "[Dog] Deconstruct" << RESET << std::endl;
}
void	Dog::makeSound() const
{
	std::cout << GREEN << "[Dog] hong hong" << RESET << std::endl;
}
std::string	Dog::getType() const
{
	std::string	name;

	name = "[Dog]";
	// std::cout << GREEN << "[Dog] type" << RESET << std::endl;
	return(name);
}
/* Cat */

Cat::Cat()
{
	std::cout << YELLOW << "[Cat] Constructor" << RESET << std::endl;
}
Cat::Cat(const Cat &c)
{
	std::cout << YELLOW << "[Cat] Copy constructor" << RESET << std::endl;
	*this = c;
}
Cat& Cat::operator=(const Cat &c)
{
	std::cout << YELLOW << "[Cat] Copy assignment operator called" << RESET << std::endl;
	*this = c;
	return(*this);
}
Cat::~Cat()
{
	std::cout << YELLOW << "[Cat] Deconstructor" << RESET << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "[Cat] meow meow" << RESET << std::endl;
}

std::string	Cat::getType() const
{
	std::string	name;

	name = "[Cat]";
	// std::cout << YELLOW << "[Cat] type" << RESET << std::endl;
	return(name);
}


