/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 21:46:27 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/24 21:52:24 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}


void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}
void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

int	Harl::setdefine(std::string level)
{
	if (level == "debug")
		return(0);
	else if (level == "info")
		return(1);
	else if (level == "warning")
		return(2);
	else if (level == "error")
		return(3);
	return(-1);
}
void	Harl::complain( std::string level )
{
	int num;

	num = setdefine(level) ;
	switch(num)
	{
		case 0:
		{
			void (Harl::*ptr1)(void) = &Harl::debug;
			(this->*ptr1)();
		}
		case 1:
		{
			void (Harl::*ptr2)(void) = &Harl::info;
			(this->*ptr2)();
		}
		case 2:
		{
			void (Harl::*ptr3)(void) = &Harl::warning;
			(this->*ptr3)();
		}
		case 3:
		{
			void (Harl::*ptr4)(void) = &Harl::error;
			(this->*ptr4)();
		}
	}

}