/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:01:34 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/02 21:43:28 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << YELLOW << "Constructors Claptrap" << RESET << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hit_point = 10;
	this->_energy_point = 10;
	this->_attack_damage = 0;
	std::cout << YELLOW << "Constructor from ClapTrap" << RESET << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "Deconstructors Claptrap" << RESET << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &cp)
{
	*this = cp;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &cp)
{
	*this = cp;
	return(*this);
}

// Default : ClapTrap <name> attacks <target>, causing <damage> points of damage!
void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_point <= 0 || this->_energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " not able to attack anymore." << std::endl;
		return ;
	}
	this->_energy_point = this->_energy_point - 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_attack_damage << " points of damage!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_point = this->_hit_point - amount;
	std::cout << "ClapTrap " << _name << "take Damage and loss " << amount << " HP" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " not able to be repaired." << std::endl;
		return ;
	}
	this->_energy_point = this->_energy_point - 1;
	this->_hit_point = this->_hit_point + amount;
	std::cout << "ClapTrap " << _name << "has be Repaired with " << amount << " HP" << std::endl;
}

void	ClapTrap::print()
{
	std::cout << "hit_point : " << this->_hit_point << std::endl;
	std::cout << "energy_point : " << this->_energy_point << std::endl;
	std::cout << "attack_point : " << this->_attack_damage << std::endl;
}
unsigned int	ClapTrap::get_hit_point()
{
	return(this->_hit_point);
}
unsigned int	ClapTrap::get_energy_point()
{
	return(this->_energy_point);
}
unsigned int	ClapTrap::get_attack_damage()
{
	return(this->_attack_damage);
}