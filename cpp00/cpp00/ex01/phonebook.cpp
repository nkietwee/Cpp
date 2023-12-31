/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:11:33 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/17 19:30:28 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook create" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook delete" << std::endl;
}
void	PhoneBook::setiter(int index)
{
	this->_index = index;
}
int		PhoneBook::getiter()
{
	return(this->_index);
}

void	PhoneBook::set_maxindex(int max_index)
{
	this->_max_index = max_index;
}
int		PhoneBook::get_maxindex()
{
	return(this->_max_index);
}
void	PhoneBook::run(std::string str)
{
	if (str == "ADD")
	{
		// std::cout << "entry ";
		this->_add();
	}
	else if (str == "SEARCH")
	{
		// std::cout << "entry search";
		this->_search();
	}
	else if (str == "EXIT")
		exit(0);
	else
		std::cout << "Program can type only ADD ,SEARCH and EXIT" << std::endl;
}
void PhoneBook::_add()
{
	std::string input[5];
	std::string prompt[5] = {"firstname", "lastname", "nickname", "phonenumber", "darkest_secret"};

	for (int i = 0; i < 5; i++)
	{
		std::cout << prompt[i] << " : " ;
		std::getline(std::cin, input[i]);
		if (input[i].empty())
		{
			std::cout << "Input doesn't empty" << std::endl;
			i--;
		}
	}
	this->_index %= 8;
	// std::cout << "---------index : " << getiter() << std::endl;
	std::cout << "---------index : " << this->_index << std::endl;
	this->_contact[this->_index].setdata(input);
	this->_index += 1;
	this->_max_index += 1;
	if (this->_max_index > 7)
		this->_max_index = 8;
}

void	PhoneBook::printvaluemore(Contact contact, int mode)
{
	std::string str;

	if (mode == firstname)
		str = contact.getfirstname();
	else if (mode == lastname)
		str = contact.getlastname();
	else if (mode == nickname)
		str = contact.getnickname();
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << ".";
}

void	PhoneBook::printvalueless(Contact contact, int mode)
{
	if (mode == firstname)
		std::cout << contact.getfirstname();
	else if (mode == lastname)
		std::cout << contact.getlastname();
	else if (mode == nickname)
		std::cout << contact.getnickname();
	else if (mode == phonenumber)
		std::cout << contact.getphonenumber();
	else if (mode == darketsecret)
		std::cout << contact.getdarketsecret();
}
void	PhoneBook::mainprint(Contact contact, int j)
{
	int	len;

	len = 0;
	len = 10 - lenstr(contact, j);
	if (len > 0)
	{
		for (int i = 0; i < len; i++)
			std::cout << " ";
		printvalueless(contact, j);
	}
	else
	{
		printvaluemore(contact, j);
	}
}
void	PhoneBook::_search()
{

	// std::cout << "str : " << this->_contact[1].setdata()

	int	space;
	std::string prompt_id;
	int	id;
	int	max_index;

	std::string prompt[5] = {"firstname", "lastname", "nickname", "phonenumber", "darkest_secret"};

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;


	// insert max index
	// printf("max_index : %d\n", _max_index);
	max_index = get_maxindex();
	// std::cout << "max_index : " << get_maxindex() << std::endl;
	for (int i = 0; i < max_index; i++)
	{
		std::cout << "         " << i << "|";
		for (int j = 0; j < 3; j++)
		{
			mainprint(this->_contact[i], j);
			std::cout << "|";
			if (j == 2)
				std::cout << std::endl;
		}
	}
	std::cout << "Enter index : " << std::endl;
	std::getline(std::cin, prompt_id);
	id = stoi(prompt_id) ;
	if (id <= get_maxindex())
	{
		std::cout << "firstname : ";
		std::cout << this->_contact[id].getfirstname() << std::endl;
		std::cout << "lastname : ";
		std::cout << this->_contact[id].getlastname() << std::endl;
		std::cout << "nickname : ";
		std::cout << this->_contact[id].getnickname() << std::endl;
		std::cout << "phonenumber : ";
		std::cout << this->_contact[id].getphonenumber() << std::endl;
		std::cout << "darket_secret : ";
		std::cout << this->_contact[id].getdarketsecret() << std::endl;
	}
	else
		std::cout << "index over !!!!!";
	// for (int i = 0; i <= id, i++)
	// {
	// 	if()
	// }

}

int	PhoneBook::lenstr(Contact contact, int mode)
{
	int len;

	len = 0;
	if (mode == firstname)
		len = this->_contact->getfirstname().length();
	else if (mode == lastname)
		len = this->_contact->getlastname().length();
	else if (mode == nickname)
		len = this->_contact->getnickname().length();
	else if (mode == phonenumber)
		len = this->_contact->getphonenumber().length();
	else if (mode == darketsecret)
		len = this->_contact->getdarketsecret().length();
	return (len);
}
















