/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:19:24 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/29 01:38:28 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER

# include <iostream>
# include <string.h>
# include <math.h>

enum type
{
    t_char,
    t_int,
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
void    cvt_char(const char *res, double nbr_d, char &end, bool is_float);
void    cvt_int(const char *res, double nbr_d, char &end, bool is_float);
void    cvt_float(const char *res, double nbr_d, char &end, bool is_float);
void    cvt_double(const char *res, double nbr_d, char &end, bool is_float);
int     prt_txtsci(const char *res, short type);
bool    check_float(std::string nbr);
double	ft_atof(const char *str, char &end);
bool check_btwfloat(const char *res);

#endif