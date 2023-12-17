/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 02:09:06 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/16 23:53:16 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

# define firstname 0
# define lastname 1
# define nickname 2
# define phonenumber 3
# define darketsecret 4


class Contact
{
	public:
		// set all name
		// Contact(std::string name ,...)
		// void		setfirstname(std::string input_firstname);
		// void		setlastname(std::string input_lastname);
		// void		setnickname(std::string input_nickname);
		// void		setphonenumber(std::string phonenumber);
		// void		setdarketsecret(std::string darketsecret);
		// int				loopprint(int mode);
		void			setdata(std::string str[5]);
		std::string		getfirstname();
		std::string		getlastname();
		std::string		getnickname();
		std::string		getphonenumber();
		std::string		getdarketsecret();
	private:
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phonenumber;
		std::string		_darketsecret;

} ;
