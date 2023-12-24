/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:38:37 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/21 22:13:39 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string _name, Weapon weapon);
		~HumanB();
		// Weapon weapon();
	private:
		std::string	_name;
		void	attack();
		void	setWeapon(Weapon weapon);
};
