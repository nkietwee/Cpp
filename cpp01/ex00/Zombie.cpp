/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:39:11 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/19 21:44:48 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	;
}
void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name)
{
	Zombie *res = nullptr;

	res = new Zombie(name);
	return (res);
}

void	randomChump(std::string name)
{
	Zombie *ret  = nullptr;

	ret = new Zombie (name);
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;

}