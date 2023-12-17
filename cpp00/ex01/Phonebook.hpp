/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 02:09:30 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/17 02:50:30 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"
#include "Phonebook.hpp"

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
		void	run(std::string str);
		void	setdata(std::string input[5]);
		void	setiter(int input_index);
		int		getiter();
		void	set_maxindex(int input_index);
		int		get_maxindex();
		void	printvalueless(Contact contact, int mode);
		void	printvaluemore(Contact contact, int mode);
		void	mainprint(Contact contact, int j);
		int		lenstr(Contact contact, int mode);
		PhoneBook();
		~PhoneBook();
	private:
		int		_max_index;
		int		_index;
		Contact	_contact[8];
		void	_add();
		void	_search(); // index, first name, lastname and nickname.
};
