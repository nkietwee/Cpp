/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:56:57 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/18 01:37:21 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Contact.hpp"

// Define some ANSI color codes
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RESET = "\033[0m";

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	run(std::string str);
		int		lenstr(Contact contact, int mode);
		void	printname(Contact contact, int mode);
		void	mainprint(Contact contact, int mode, int len);
	private:
		Contact	contact[8];
		int		_index;
		int		_max_index;
		void	_add();
		void	_search();
};