/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:37:49 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/21 16:39:33 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *Zb;

	Zb = new Zombie(name);
	std::cout <<  name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;

}

