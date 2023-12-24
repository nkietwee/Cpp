/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:34:17 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/21 22:20:53 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA();
		HumanA(std::string name, Weapon weapon);
		~HumanA();
		Weapon _weapon();
	private:
		// Weapon _weapon();
		std::string	_name;
		void	attack();
		void	setWeapon(Weapon weapon);
};


