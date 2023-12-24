/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:09:18 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/21 22:18:34 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		// bob.attack();
		// club.setType("some other type of club"); bob.attack();
		// bob.attack();
	}
	// {
	// 	Weapon club = Weapon("crude spiked club");

	// 	HumanB jim("Jim");
	// 	jim.setWeapon(club);
	// 	jim.attack();
	// 	club.setType("some other type of club"); jim.attack();
	// 	jim.attack();
	// }
	return 0;
}

