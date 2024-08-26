/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:19:24 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 00:33:15 by nkietwee         ###   ########.fr       */
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

        static void convert(char *nbr);

};

double  ft_stob(char *str, char &end);
void    cvt_char(double nbr_d, char &end);
void    cvt_int(double nbr_d, char &end);
void    cvt_float(char *res, double nbr_d, char &end);
void    cvt_double(char *res, double nbr_d, char &end);
int     prt_txtsci(char *res, short type);

#endif