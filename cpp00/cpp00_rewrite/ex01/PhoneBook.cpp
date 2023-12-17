/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:27:54 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/18 02:01:50 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook create" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destroy" << std::endl;
}


void	PhoneBook::_add()
{
	std::string prompt[5] = {"  firstname", "  lastname", "  nickname", "  phonenumber", "  darkestsecret"};
	std::string	input[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << prompt[i] << " : " ;
		std::getline(std::cin, input[i]);
		if (input[i].empty())
		{
			std::cout << RED << "     Empty input !!!!! " << RESET << std::endl;
			i--;
		}
	}
	this->_index %= 8 ;
	this->contact[this->_index].setdata(input);
	this->_max_index += 1;
	if (this->_max_index > 7)
		this->_max_index = 8;
	this->_index += 1;
}

int	PhoneBook::lenstr(Contact contact, int mode)
{
	int		len;

	if (mode == firstname)
		len = contact.getfirstname().length();
	else if (mode == lastname)
		len = contact.getlastname().length();
	else if (mode == nickname)
		len = contact.getnickname().length();
	else if (mode == phonenumber)
		len = contact.getphonenumber().length();
	else if (mode == darkestsecret)
		len = contact.getdarketsecret().length();
	return(len);
}

void	PhoneBook::printname(Contact contact, int mode)
{
		if (mode == firstname)
			std::cout << contact.getfirstname();
		else if (mode == lastname)
			std::cout << contact.getlastname();
		else if (mode == nickname)
			std::cout << contact.getnickname();
		else if (mode == phonenumber)
			std::cout << contact.getphonenumber();
		else if (mode == darkestsecret)
			std::cout << contact.getdarketsecret();
}
void	PhoneBook::mainprint(Contact contact, int mode, int len)
{
	int	sp;
	std::string	str;

	if (len < 10)
	{
		sp = 10 - len ;
		for (int i = 0; i < sp; i++)
			std::cout << " " ;
		printname(contact, mode);
	}
	else
	{
		if (mode == firstname)
			str = contact.getfirstname();
		else if (mode == lastname)
			str = contact.getlastname();
		else if (mode == nickname)
			str = contact.getnickname();
		else if (mode == phonenumber)
			str = contact.getphonenumber();
		else if (mode == darkestsecret)
			str = contact.getdarketsecret();
		for (int j = 0; j < 9; j++)
			std::cout << str[j];
		std::cout << ".";

	}
	if (mode != nickname)
			std::cout << "|";
	if (mode == nickname)
		std::cout << std::endl;
}

void	PhoneBook::_search()
{
	std::string prompt[5] = {"  firstname", "  lastname", "  nickname", "  phonenumber", "  darkestsecret"};
	std::string	str;
	int	len;
	int	index;

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < _max_index; i++)
	{
		std::cout << "         " << i << "|";
		for (int j = 0; j < 3; j++)
		{
			len = lenstr(contact[i], j);
			mainprint(contact[i], j, len);
		}
	}
	std::cout << "Enter index : ";
	std::getline(std::cin, str);
	if (all_of(str.begin(), str.end(), :: isdigit) == true)
	{
		index = stoi(str);
		if (index < _max_index)
		{
			for (int k = 0; k < 5; k++)
			{
				std::cout << prompt[k] << " : " ;
				printname(contact[index], k);
				std::cout << std::endl;
			}
		}
		else
			std::cout << RED << "Don't have index" << RESET << std::endl;
	}
	else
		std::cout << RED << "Enter number" << RESET << std::endl ;

}

void	PhoneBook::run(std::string str)
{
	if (str == "ADD")
		this->_add();
	else if (str == "SEARCH")
		this->_search();
	if (str == "EXIT")
		exit(0);
}