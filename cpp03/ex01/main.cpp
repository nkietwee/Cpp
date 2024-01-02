/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 17:03:30 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/02 21:29:40 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Mew("Mew");
	ScavTrap Muay("Muay");

	for (int i = 1; i < 13; i += 2)
	{
		Mew.attack("Muay");
		// std::cout << "-----------get_ad : " << Mew.get_attack_damage() << std::endl;
		Muay.takeDamage(Mew.get_attack_damage());
		std::cout << "-------------------" << std::endl;
		std::cout << "Muay" << std::endl;
		Muay.print();
		std::cout << "-------------------" << std::endl;
		std::cout << "Mew" << std::endl;
		Mew.print();
		std::cout << std::endl;
	}

	Mew.beRepaired(1000);
	Muay.beRepaired(100000000);
	std::cout << "========" << std::endl;
	Muay.guardGate();

}