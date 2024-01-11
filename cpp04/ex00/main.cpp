/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:09:18 by nkietwee          #+#    #+#             */
/*   Updated: 2024/01/10 21:37:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Polymorphism.hpp"
#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// // meta->makeSound() ;
	// // meta->getType();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	delete j;
	return 0;
}