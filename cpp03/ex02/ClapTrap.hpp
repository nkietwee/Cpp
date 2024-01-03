/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:47:20 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/02 20:17:22 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// Define some ANSI color codes
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RESET = "\033[0m";

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &cp);
		ClapTrap& operator= (const ClapTrap &cp);
		ClapTrap(std::string name);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		unsigned int	get_hit_point();
		unsigned int	get_energy_point();
		unsigned int	get_attack_damage();
		void	print();

	/*members cannot be accessed from outside the class,
	however, they can be accessed in inherited classes.*/
	protected:
		unsigned int	_hit_point;
		unsigned int	_energy_point; // Attacking and repairing cost 1 energy point each.
		unsigned int	_attack_damage;
		std::string		_name;
};


