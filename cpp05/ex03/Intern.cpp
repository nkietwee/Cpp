/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:14:24 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/24 15:53:46 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "[Intern] constructor called." << std::endl;
}

Intern::~Intern()
{
	std::cout << "[Intern] deconstructor called." << std::endl;
}

Intern& Intern::operator=(const Intern &other)
{
    std::cout << "[Intern] Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        return (*this);
    }
}

Intern::Intern(const Intern &other)
{
    std::cout << "[Intern] Copy constructor called" << std::endl;  
}

AForm* Intern::makeForm(const std::string name, const std::string target) const
{
    if (target == "shrubbery creation" )
    {
		std::cout << "Itern creates " << target;
		return new ShrubberyCreationForm(name);
	}
	else if (target == "robotomy request")
    {
		std::cout << "Itern creates " << target;
		return new RobotomyRequestForm(name);
	}
	else if (target == "presidential pardon")
    {
		std::cout << "Itern creates " << target;
		return new PresidentialPardonForm(name);
	}
    else
    {
		std::cerr << target << " form doesn't exist"  << std::endl;
	}
	return (nullptr);
}

std::ostream& operator<<(std::ostream & os, Intern const& other)
{
    os << "[Intern] called" ;
    return os;
}