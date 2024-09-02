/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:24:16 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/03 00:59:27 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	// std::cout << "Constructor called" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		this->_table = other._table;
	}
	return (*this);	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) :_table(other._table)
{
	
}

BitcoinExchange::~BitcoinExchange()
{
	// std::cout << "Deconstructor called" << std::endl;
}

std::vector<std::string> BitcoinExchange::ft_split(const std::string &str, char delimiter)
{
	std::vector<std::string> tokens;
	std::string token;
	std::stringstream ss(str);
	
	while (std::getline(ss, token, delimiter))
	{
		tokens.push_back(token);
	}	
	return tokens;
}

void	BitcoinExchange::ft_print_vec_str(std::vector<std::string> vec)
{
	for (unsigned long i = 0; i < vec.size(); i++)
		std::cout << "|" << vec[i] << "|" ;
	std::cout << std::endl;
}

void	BitcoinExchange::ft_prtmap(std::map<std::string, float> mp)
{
	std::map<std::string, float>::iterator it = mp.begin();

	while (it != mp.end())
	{
		std::cout << "Key: " << it->first
		<< ", Value: " << it->second << std::endl;
		++it;
	}
}

void BitcoinExchange::init_table()
{
	std::ifstream inputFile("data.csv"); 

	if (!inputFile.is_open())
		throw ("Error opening the data.csv!");

	std::string line;
	// std::cout << "File Content[data.csv]: " << std::endl;
	std::vector<std::string> sp_vec;
	while (getline(inputFile, line))
	{ 
		// std::cout << line << std::endl; // Print the current line
		sp_vec = ft_split(line, ',');
		// ft_print_vec_str(sp);
		_table.insert(std::pair<std::string, float>(sp_vec[0], atof(sp_vec[1].c_str())));
		sp_vec.empty();
	}

	inputFile.close(); 
}

std::map<std::string, float>	BitcoinExchange::ft_getmap_table()
{
	return (this->_table);
}


std::string	BitcoinExchange::ft_trim(std::string line, char c)
{
	size_t	start;
	size_t	end;

	start = line.find_first_not_of(c);
	end = line.find_last_not_of(c);
	
	// std::string::npos is position that string doesn't match
	// end != 0 -> checks if there are any non-key characters at the end of the string.
	
	if (start != std::string::npos &&  end != 0)
		return (line.substr(start, end - start + 1));
	/* Incase string and char have 1 charater and same text*/
	if (start == std::string::npos && end == std::string::npos)
		return ("");
	return (line);	
}

std::string	BitcoinExchange::ft_trim_ispace(std::string line)
{
	char		is_sp[5] = {'\t', '\n', '\v', '\f', '\r'};
	std::string	sp_line;
	int			i;
	
	i = 0;
	sp_line = ft_trim(line, ' ');
	while (i < 4)
	{
		sp_line = ft_trim(sp_line, is_sp[i]);
		i++;
	}
	return (sp_line);	
}


float	BitcoinExchange::getPrice(std::string& date)
{
	std::map<std::string, float>::const_iterator	it;

	it = this->_table.find(date);
	if (it == this->_table.end())
		it = --this->_table.lower_bound(date);
	return it->second;
}

bool BitcoinExchange::check_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	return false; // It's not a leap year
}

bool	BitcoinExchange::is_all_digit(std::string date)
{
	const char *str = date.c_str();
	size_t i = 0;
	while (i < strlen(str))
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '.' || str[i] == '-' || str[i] == ' ')
		{
			i++;
			continue;
		}
		else
			return (false);
		i++;
	}
	return (true);
}


bool	BitcoinExchange::check_date(int d, int m, int y)
{
	// date have alrerady exist
	if (m == 2)
	{
		if (d == 28 || d == 29)
		{
			if (check_leap_year(y) == true && d != 29)
				return (false);
			return (true);
		}
		else if (d > 0 && d < 28)
			return (true);
		else // > 29
			return (false);
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		if (d < 0 || d > 31)
		{
			return (false);
		}
		return (true);
	}
	else if (m == 1 || m == 3 || m == 5 || m == 7 || \
			m == 8 || m == 10 || m == 12)
	{
		if (d < 0 || d > 30)
		{
			return (false);
		}
		return (true);
	}
	else 	// > 13 or < 1
		return (false);
	return (true);
}

bool BitcoinExchange::valid_date(std::string date)
{
	// Year-Month-Day
	if (date.empty())
		return (true);
	if (is_all_digit(date) == false)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	t_time t;
	t.sp_vec = ft_split(ft_trim_ispace(date), '-');
	if (t.sp_vec.size() !=  3)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	t.y = atoi(t.sp_vec[0].c_str());
	t.m = atoi(t.sp_vec[1].c_str());
	t.d = atoi(t.sp_vec[2].c_str());
	if (check_date(t.d, t.m, t.y) == false)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	// ft_print_vec_str(t.sp_vec);
	return (true);
}

bool BitcoinExchange::valid_value(std::string value)
{
	if (value.empty())
		return (true);
	if (is_all_digit(value) == false)
	{
		std::cout << "Error: bad input => " << value << std::endl;
		return (false);
	}
	float res = atof(value.c_str());
	if (res < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	else if (res > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}


void	BitcoinExchange::ft_prt_value(char *input)
{
	std::ifstream inputFile(input); 

	if (!inputFile.is_open())
		throw ("Error opening the data.csv!");
	std::string line;
	std::vector<std::string> str_trim;
	std::vector<std::string> sp_vec;
	bool chk_date = true;
	bool chk_value = true;
	getline(inputFile, line); // drop heaad
	while (getline(inputFile, line))
	{ 
		sp_vec = ft_split(line, '|');
		chk_date = valid_date(sp_vec[0]);
		chk_value = valid_value(sp_vec[1]);
		if (chk_date == true && chk_value == true)
		{
			std::cout << sp_vec[0] << " => " << sp_vec[1] << " = " \
			<< getPrice(sp_vec[0]) * atof(sp_vec[1].c_str()) << std::endl;
		}
		str_trim.clear();
		sp_vec.clear();
	}
	inputFile.close(); 
}