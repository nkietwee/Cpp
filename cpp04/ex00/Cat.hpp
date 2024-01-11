/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:26:15 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/11 17:41:03 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(std::string name);
		Cat(const Cat &c);
		Cat&	operator=(const Cat &c);

		void	setType(std::string name);
		// std::string	getType(void);
		std::string	getType(void) const;
	protected:
		std::string	_type;
};