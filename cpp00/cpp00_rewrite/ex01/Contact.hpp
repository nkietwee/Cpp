/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:12:20 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/18 00:28:49 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#define	firstname 0
#define	lastname 1
#define	nickname 2
#define	phonenumber 3
#define	darkestsecret 4

class Contact
{
	public:
		void	setdata(std::string	input[5]);
		std::string	getfirstname();
		std::string	getlastname();
		std::string	getnickname();
		std::string	getphonenumber();
		std::string	getdarketsecret();

	private:
		std::string _firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestsecret;

};