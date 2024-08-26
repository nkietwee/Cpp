/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:14:24 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 04:19:13 by nkietwee         ###   ########.fr       */
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
	return (*this);

}

Intern::Intern(const Intern &other)
{
	(void)other;
	std::cout << "[Intern] Copy constructor called" << std::endl;  
}

AForm* Intern::makeForm(const std::string name, const std::string target) const
{   
	std::map<int, std::string> table;
	table[0] = "shrubbery creation";
	table[1] = "robotomy request";
	table[2] = "presidential pardon";
	for (int i = 0; i < 3; i++)
	{
		if (name == table[i])
		{
			switch (i)
			{
				case 0:
					std::cout << GREEN << "Intern creates " << name << RESET << std::endl;
					return new ShrubberyCreationForm(target);
				case 1:
					std::cout << GREEN << "Intern creates " << name << RESET << std::endl;
					return new RobotomyRequestForm(target);
				case 2:
					std::cout << GREEN << "Intern creates " << name << RESET << std::endl;
					return new PresidentialPardonForm(target);
			}	
		}
	}
	std::cout << name << " form doesn't exist"  << std::endl;
	return (NULL);
}

std::ostream& operator<<(std::ostream & os, Intern const& other)
{
	(void)other;
	os << "[Intern] called";
    return os;
}