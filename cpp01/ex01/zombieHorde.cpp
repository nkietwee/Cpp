/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:46:05 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/21 17:10:46 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie *Zb = new Zombie[N];
	// Zombie Zb[N];

	for (int i = 0; i < N; i++)
	{
		Zb[i].setname(name);
		Zb[i].announce();
	}
	return (Zb);
}