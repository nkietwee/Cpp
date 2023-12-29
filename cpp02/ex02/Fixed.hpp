/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:53:17 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/28 16:55:28 by nkietwee         ###   ########.fr       */
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
		Fixed&	operator=(const Fixed &fp);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		bool	operator>(Fixed const &fp);
		bool	operator<(Fixed const &fp);
		bool	operator>=(Fixed const &fp);
		bool	operator<=(Fixed const &fp);
		bool	operator==(Fixed const &fp);
		bool	operator!=(Fixed const &fp);

		Fixed	operator+(Fixed const &fp) const; // read only , cann't fixed
		Fixed	operator-(Fixed const &fp) const;
		Fixed	operator*(Fixed const &fp) const;
		Fixed	operator/(Fixed const &fp) const;

		// Fixed -> returns a copy of the original object before the increment operation.
		// Fixed& -> the current object and returns the modified object by reference.
		Fixed&	operator++(void);	// ++i
		Fixed	operator++(int);	// i++
		Fixed&	operator--(void);	// --i
		Fixed	operator--(int);	// i--

		static	Fixed&		min(Fixed &fp1, Fixed &fp2);
		static const Fixed&	min(Fixed const &fp1, Fixed const &fp2); //
		static Fixed&		max(Fixed &fp1, Fixed &fp2);
		static const Fixed&	max(Fixed const &fp1, Fixed const &fp2);

	private:
		int _nbr;
		static const int _bits;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fp);