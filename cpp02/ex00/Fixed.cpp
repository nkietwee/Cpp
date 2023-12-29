/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:36:23 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/27 16:56:38 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// : variable(value) -> initualize value
Fixed::Fixed() : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &fp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fp;
	// this->_nbr = fp.getRawBits();
}
Fixed&	Fixed::operator=(const Fixed &fp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_nbr = fp.getRawBits();
	return(*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits( int const raw)
{
	this->_nbr = raw;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_nbr);
}