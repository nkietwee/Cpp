/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:04:14 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/27 23:10:12 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &fp)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_nbr = fp.getRawBits();
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int	Fixed::getRawBits( void ) const
{
	return(this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}

Fixed::Fixed(const int nbr) : _nbr(nbr << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float nbr) : _nbr((roundf(nbr * (1 << this->_bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &fp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nbr = fp.getRawBits();
	return(*this);
}


int	Fixed::toInt( void ) const
{
	return(_nbr >> _bits);
}

float	Fixed::toFloat( void ) const
{
	return(float(this->_nbr) / (1 << this->_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fp)
{
	os << (float)fp.toFloat();
	return os;
}