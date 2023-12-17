/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:16:13 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/18 01:00:49 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setdata(std::string input[5])
{
	_firstname = input[0];
	_lastname = input[1];
	_nickname = input[2];
	_phonenumber = input[3];
	_darkestsecret = input[4];

}

std::string	Contact::getfirstname()
{
	return(this->_firstname);
}
std::string	Contact::getlastname()
{
	return(this->_lastname);
}

std::string	Contact::getnickname()
{
	return(this->_nickname);
}
std::string	Contact::getphonenumber()
{
	return(this->_phonenumber);
}
std::string	Contact::getdarketsecret()
{
	return(this->_darkestsecret);
}