/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:35:39 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/21 22:24:11 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->_name = name ;
	weapon = weapon;
}
// HumanA::HumanA(std::string name)
// {
// 	std::cout << "Create Human A" << std::endl;
// }

// HumanA::~HumanA()
// {
// 	;
// }