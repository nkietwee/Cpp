/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 19:17:22 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/22 20:21:35 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string.h>

enum type
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
} ;

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain( std::string level );
		// void	call
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		int		setdefine(std::string level);
};

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}
