/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:01:34 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/02 22:56:59 by nkietwee         ###   ########.fr       */
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
	_hit_point = 10;
	_energy_point = 10;
	_attack_damage = 0;
	std::cout << YELLOW << "Constructor ClapTrap(name)" << RESET << std::endl;
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

// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
// When ClapTrap repairs itself, it gets <amount> hit points back.
// Attacking and repairing cost 1 energy point each.
// Of course, ClapTrap can’t do anything if it has no hit points or energy points left.


// Default : ClapTrap <name> attacks <target>, causing <damage> points of damage!
void	ClapTrap::attack(const std::string& target)
{
	// std::cout << "______________________energy point : " << this->_energy_point << std::endl;
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
	this->_hit_point = this->_hit_point - amount; //hp
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