/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:17:48 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/11 17:33:49 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("None")
{
	std::cout << GREEN << "[Animal] Constructor called" << RESET << std::endl;
}
Animal::~Animal(void)
{
	std::cout << GREEN << "[Animal] Deconstructor called" << RESET << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
	std::cout << GREEN << "[Animal] Constructor[name] called" << RESET << std::endl;
}

Animal::Animal(const Animal &Am) : _type(Am._type)
{
	std::cout << GREEN << "[Animal] copy constructor" << RESET << std::endl;
	*this = Am.getType();
}

Animal& Animal::operator= (const Animal &Am)
{
	std::cout << GREEN << "[Animal] copy assignment operator called" << RESET << std::endl;
	*this = Am.getType();
	return(*this);
}

void	Animal::makeSound(void) const
{
	std::cout<< GREEN << "[Animal] hong hong" << RESET << std::endl;
}

// void	Animal::setType(std::string type_animal) const
void	Animal::setType(std::string type_animal)
{
	this->_type = type_animal;
}

std::string	Animal::getType(void) const
{
	return(_type);
}

