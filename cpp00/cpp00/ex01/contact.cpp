/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:19:03 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/17 00:07:44 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Contact.hpp"
#include "Phonebook.hpp"

void	Contact::setdata(std::string input[5])
{
	this->_firstname = input[0];
	this->_lastname = input[1];
	this->_nickname = input[2];
	this->_phonenumber = input[3];
	this->_darketsecret = input[4];
}
std::string		Contact::getfirstname()
{
	return (_firstname);
}
std::string		Contact::getlastname()
{
	return (_lastname);
}
std::string		Contact::getnickname()
{
	return (_nickname);
}
std::string		Contact::getphonenumber()
{
	return (_phonenumber);
}
std::string		Contact::getdarketsecret()
{
	return (_darketsecret);
}