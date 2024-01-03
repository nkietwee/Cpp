/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:51:57 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/02 22:14:39 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << MAGENTA << "Constructors Fragtrap" << RESET << std::endl;
}
FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_point = 100;
	this->_energy_point = 100;
	this->_attack_damage = 30;
	std::cout << MAGENTA << "Constructor FragTrap(name)" << RESET << std::endl;
}
FragTrap::FragTrap(const FragTrap &ft)
{
	*this = ft;
}

FragTrap&	FragTrap::operator=(const FragTrap &ft)
{
	*this = ft;
	return(*this);
}
FragTrap::~FragTrap()
{
	std::cout << MAGENTA << "Deconstructors Fragtrap" << RESET << std::endl;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << MAGENTA << "a positive high fives request" << RESET << std::endl;
}