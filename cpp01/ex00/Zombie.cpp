/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:29:51 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/21 16:37:33 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}
Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->_name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}