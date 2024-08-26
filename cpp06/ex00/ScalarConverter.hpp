/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:19:24 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 00:46:09 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER

# include <iostream>
# include <string.h>
# include <math.h>

enum type
{
    t_double,
    t_float
};

class ScalarConverter
{
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter& operator=(const ScalarConverter &other);
        ScalarConverter(const ScalarConverter &other);

        static void convert(std::string str);

};

double  ft_stob(const char *str, char &end);
void    cvt_char(double nbr_d, char &end);
void    cvt_int(double nbr_d, char &end);
void    cvt_float(const char *res, double nbr_d, char &end);
void    cvt_double(const char *res, double nbr_d, char &end);
int     prt_txtsci(const char *res, short type);

#endif