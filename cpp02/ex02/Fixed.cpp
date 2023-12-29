/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:57:00 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/28 17:22:05 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0)
{
	;
}

Fixed::Fixed(const Fixed &fp)
{
	this->_nbr = fp.getRawBits();
	// return (*this);
}
Fixed::~Fixed()
{
	;
}
Fixed::Fixed(const int nbr) : _nbr(nbr << _bits)
{
	;
}

Fixed::Fixed(const float nbr) : _nbr((roundf(nbr * (1 << this->_bits))))
{

	;
}
int Fixed::getRawBits(void) const
{
	return (this->_nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}
int Fixed::toInt(void) const
{
	return (this->_nbr >> this->_bits);
}

float Fixed::toFloat(void) const
{
	// return(float(this->_nbr) / (1 << this->_bits));
	return ((this->_nbr) / ((float)(1 << this->_bits)));
}

Fixed &Fixed::operator=(const Fixed &fp)
{
	this->_nbr = fp.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fp)
{
	// os << (float)fp.toFloat();
	os << fp.toFloat();
	return os;
}

bool Fixed::operator>(Fixed const &fp)
{
	return (this->_nbr > fp.getRawBits() ? true : false);
}

bool Fixed::operator<(Fixed const &fp)
{
	return (this->_nbr < fp.getRawBits() ? true : false);
}

bool Fixed::operator>=(Fixed const &fp)
{
	return (this->_nbr >= fp.getRawBits() ? true : false);
}

bool Fixed::operator<=(Fixed const &fp)
{
	return (this->_nbr <= fp.getRawBits() ? true : false);
}

bool Fixed::operator==(Fixed const &fp)
{
	return (this->_nbr == fp.getRawBits() ? true : false);
}

bool Fixed::operator!=(Fixed const &fp)
{
	return (this->_nbr != fp.getRawBits() ? true : false);
}

Fixed Fixed::operator+(Fixed const &fp) const
{
	// Fixed tmp;

	// tmp.setRawBits(this->_nbr + fp.getRawBits());
	// return (tmp);
	return (this->toFloat() + fp.toFloat());
}

Fixed Fixed::operator-(Fixed const &fp) const
{
	// Fixed tmp;

	// tmp.setRawBits(this->_nbr - fp.getRawBits());
	// return (tmp);
	return (this->toFloat() - fp.toFloat());
}

Fixed Fixed::operator*(Fixed const &fp) const
{
	// Fixed tmp;

	// tmp.setRawBits(this->_nbr * fp.getRawBits());
	return (this->toFloat() * fp.toFloat());
}

Fixed Fixed::operator/(Fixed const &fp) const
{
	// Fixed tmp;

	// tmp.setRawBits(this->_nbr / fp.getRawBits());
	// return (tmp);
	return (this->toFloat() / fp.toFloat());
}

// ++i
Fixed& Fixed::operator++(void)
{
	++this->_nbr;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;

	tmp = *this;
	++this->_nbr;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	--this->_nbr;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;

	tmp = *this;
	--this->_nbr;
	return (tmp);
}

Fixed &Fixed::min(Fixed &fp1, Fixed &fp2)
{
	return (fp1 < fp2 ? fp1 : fp2);
}
Fixed const &Fixed::min(Fixed const &fp1, Fixed const &fp2)
{
	return (fp1.getRawBits() < fp2.getRawBits() ? fp1 : fp2);
}

Fixed &Fixed::max(Fixed &fp1, Fixed &fp2)
{
	// std::cout << "max" << std::endl;
	return (fp1 > fp2 ? fp1 : fp2);
}

Fixed const &Fixed::max(Fixed const &fp1, Fixed const &fp2)
{
	// std::cout << "const max" << std::endl;
	return (fp1.getRawBits() > fp2.getRawBits() ? fp1 : fp2);
}

const int Fixed::_bits = 8;