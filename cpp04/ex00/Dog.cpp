/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:26:06 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/10 21:40:10 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : _type("Dog")
{
	std::cout << YELLOW << "[Dog] Constructor" << RESET << std::endl;
}

Dog::~Dog(void)
{
	std::cout << YELLOW << "[Dog] Deconstructor" << RESET << std::endl;
}
Dog::Dog(std::string name)
{
	std::cout << YELLOW << "[Dog] Constructor[name]" << RESET << std::endl;
}

Dog::Dog(const Dog &d)
{
	std::cout << YELLOW << "[Dog] Copy constructor" << RESET << std::endl;
	*this = d;
}
Dog&	Dog::operator=(const Dog &d)
{
	std::cout << YELLOW << "[Dog] Copy assign operator called" << RESET << std::endl;
	this->_type = d.getType();
	return(*this);
}