/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:59:10 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/27 22:51:15 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fp);
		Fixed(const int nbr);
		Fixed(const float nbr);
		~Fixed();
		Fixed&	operator = (const Fixed &fp);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int	_nbr;
		static const int	_bits = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fp);
