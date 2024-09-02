/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:49:51 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/02 19:19:27 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE

#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <string.h>

typedef struct s_tome
{
	int y;
	int m;
	int d;
	std::vector<std::string> sp_vec;
} t_time;


class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange &other);
		BitcoinExchange(const BitcoinExchange &other);
		~BitcoinExchange();
		
		void init_table();
		void init_input(char *input);
		std::vector<std::string> ft_split(const std::string &str, char delimiter);
		void	ft_print_vec_str(std::vector<std::string> vec);
		void	ft_prtmap(std::map<std::string, float> mp);

		std::map<std::string, float>	ft_getmap_table();

		std::string	ft_trim_ispace(std::string line);
		std::string	ft_trim(std::string line, char c);

		void	ft_prt_value(char *input);

		// valid data
		bool	is_all_digit(std::string date);
		bool	valid_date(std::string date);
		bool	valid_value(std::string value);
		bool	check_date(int d, int m, int y);
		bool	check_leap_year(int year);
		
		float	getPrice(std::string& date);
	
	private:
		std::map<std::string, float> _table;
};

#endif