/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:31:48 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/21 22:09:42 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class Weapon
{
	public:
		Weapon();
		Weapon(std::string name);
		~Weapon();
		// HumanA A;
		// HumanB B;
	private:
		std::string _name;
		void	setType();
	/* data */
};
