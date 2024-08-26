/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:35:40 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 00:32:51 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    // std::cout << "[ScalarConverter] constructer called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    // std::cout << "[ScalarConverter] deconstructer called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
}

void ScalarConverter::convert(char *str)
{
    double  nbr_d ;
    char c = '\0';
    char    &end = c;

    nbr_d = ft_stob(str, end);
    cvt_char(nbr_d, end);
    cvt_int(nbr_d, end);
    cvt_float(str, nbr_d, end);
    cvt_double(str, nbr_d, end);
}

double ft_stob(char *str, char &end)
{
    int i;
    int sign;
    double res;

    i = 0;
    sign = 1;
    res = 0;
    while (isspace(str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i])
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    if (str[i])
        end = str[i];
    return(res * sign);
}


void cvt_char(double nbr_d, char &end)
{
    if (((nbr_d > -129 && nbr_d < 32) || nbr_d == 127) && end == '\0')
        std::cout << "char: " << "Non displayable" << std::endl;
    else if (end == '\0' && (nbr_d > 31 && nbr_d < 127))
        std::cout << "char: '" << (char)nbr_d << "'" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
}

void cvt_int(double nbr_d, char &end)
{
    if (end != '\0')
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nbr_d) << std::endl;
}

void cvt_float(char *res, double nbr_d, char &end)
{
    if (prt_txtsci(res, t_float) == true)
        return ;
    if (end != '\0')
        std::cout << "float: impossible" << std::endl;
    else if (nbr_d > -1000000 && nbr_d < 1000000)
        std::cout << "float: " << nbr_d << ".0f" << std::endl;
    else
        std::cout << "float: " << nbr_d << "f" << std::endl;
}

void cvt_double(char *res, double nbr_d, char &end)
{
    if (prt_txtsci(res, t_double) == true)
        return ;
    if (end != '\0')
        std::cout << "double: impossible" << std::endl;
    else if (nbr_d > -1000000 && nbr_d < 1000000)
        std::cout << "double: " << nbr_d << ".0" << std::endl;
    else
            std::cout << "double: " << nbr_d << std::endl;
}

int prt_txtsci(char *res, short type)
{
    if (strcmp(res, "nan") == 0 || strcmp(res, "nanf") == 0)
    {
        if (type == t_double)
            std::cout << "float: nanf" << std::endl;
        else
            std::cout << "double: nanf" << std::endl;
        return true;
    }
    else if (strcmp(res, "inf") == 0 || strcmp(res, "inff") == 0 \
          || (strcmp(res, "+inf") == 0 || strcmp(res, "+inff") == 0))
    {
        if (type == t_double)
            std::cout << "float: inff" << std::endl;
        else
            std::cout << "double: inff" << std::endl;
        return true;
    }
    else if (strcmp(res, "-inf") == 0 || strcmp(res, "-inff") == 0 )
    {
        if (type == t_double)
            std::cout << "float: -inff" << std::endl;
        else
            std::cout << "double: -inff" << std::endl;
        return true;
    }
    return (false);
}
