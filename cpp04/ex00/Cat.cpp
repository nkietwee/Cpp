/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:27:18 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/11 17:42:02 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : _type("Cat")
{
	std::cout << BLUE << "[Cat] Constructor" << std::endl;
}
Cat::Cat(std::string name) : _type(name)
{
	std::cout << BLUE << "[Cat] Constructor[name]" << std::endl;
}
Cat::Cat(const Cat &c) : _type(c.getType())
{
	std::cout << BLUE << "[Cat] Copy constructor" << std::endl;
	// *this = c.getType();
}
Cat&	Cat::operator=(const Cat &c)
{
	std::cout << BLUE << "[Cat] Copy assignment called" << std::endl;
	*this = c.getType();
	return(*this);
}

void	Cat::setType(std::string name)
{
	std::cout << YELLOW << "[Cat] set Type" << RESET << std::endl;
	_type = name;
}

// std::string	Cat::getType(void)
std::string	Cat::getType(void) const
{
	return(_type);
}

Cat::~Cat()
{
	std::cout << BLUE << "[Cat] Deonstructor" << std::endl;
}