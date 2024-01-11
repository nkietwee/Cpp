/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:24:09 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/11 17:23:47 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(std::string name);
		~Dog(void);
		Dog(const Dog &d);
		Dog&	operator=(const Dog &d);

		void	setType(std::string name);
		std::string	getType(void) const;
		void	makeSound(void) const;

	protected:
		std::string _type;
};

