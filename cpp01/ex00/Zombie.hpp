/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:36:29 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/19 20:45:33 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
	public:
		void announce(void);
		Zombie(std::string name);
		~ Zombie();
	private:
		std::string _name;
} ;

Zombie* newZombie(std::string name);
void randomChump(std::string name);