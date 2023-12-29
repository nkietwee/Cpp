/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:30:08 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/27 16:41:29 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fp);
		Fixed&	operator=(const Fixed &fp);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int	_nbr;
		static const int bits = 8;


};