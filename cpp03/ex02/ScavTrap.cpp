/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:53:32 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/02 22:01:12 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << BLUE << "Constructor ScavTrap"  << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap()
{
	std::cout << BLUE << "Copy ScavTrap" << RESET << std::endl;
}
ScavTrap&	ScavTrap::operator=(const ScavTrap &st)
{
	std::cout << BLUE << "Copy assignment operator called" << RESET << std::endl;
	*this = st;
	return(*this);
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_name = name;
	this->_hit_point = 100;
	this->_energy_point = 50;
	this->_attack_damage = 20;
	std::cout << BLUE << "Constructor ScavTrap(name)"  << RESET << std::endl;

}
ScavTrap::~ScavTrap()
{
	std::cout << BLUE << "Deconstructor ScavTrap" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << BLUE << "ScavTrap is now in Gate keeper mode" << RESET << std::endl;
}
