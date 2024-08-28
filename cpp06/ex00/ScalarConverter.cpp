/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:35:40 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/29 01:52:58 by nkietwee         ###   ########.fr       */
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
    static_cast<void>(other);
    return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    static_cast<void>(other);
}

void ScalarConverter::convert(std::string str)
{
    double  nbr_d ;
    char c = '\0';
    char    &end = c;
    bool    is_float = check_float(str);

    nbr_d = ft_atof(str.c_str(), end);
    cvt_char(str.c_str(), nbr_d, end, is_float);
    cvt_int(str.c_str(), nbr_d, end, is_float);
    cvt_float(str.c_str(), nbr_d, end, is_float);
    cvt_double(str.c_str(), nbr_d, end, is_float);
}


double	ft_power(int index)
{
	double	res;
	int		i;

	i = 0;
	res = 1;
	while (i < index)
	{
		res = res * 0.1;
		i++;
	}
	return (res);
}

double	ft_float(const char *str, char &end)
{
	int		i;
	int		j;
	double	res;

	i = 1;
	j = 1;
	res = 0;
	while (str[i])
	{
		if (str[i] != 'f')
			res = res + (ft_power(j) * (str[i] - '0'));
		if (str[i] == 'f')
            end = 'f';
		j++;
		i++;
	}
	return (res);
}

double	ft_atof(const char *str, char &end)
{
	int		i;
	double	res;
	float	sym;

	i = 0;
	res = 0;
	sym = 1;
	if (*str == '-')
	{
		sym = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (10 * res) + (str[i] - '0');
		str++;
	}
	if (*str == '.')
		res = res + ft_float(str, end);
	return (res * sym);
}

bool check_float(std::string nbr)
{
    int len = nbr.length();
    if (nbr[len - 1] == 'f' || nbr.find(".") != std::string::npos)
        return (true);
    return (false);
}


void cvt_char(const char *res, double nbr_d, char &end, bool is_float)
{
    if (prt_txtsci(res, t_char) == true)
        return ;
    if ((((nbr_d > -129 && nbr_d < 32) || nbr_d == 127) && end == '\0' ) ||  \
    (is_float == true && (((nbr_d > -129 && nbr_d < 32) || nbr_d == 127))))
        std::cout << "char: " << "Non displayable" << std::endl;
    else if (end == '\0' && ((nbr_d > 31 && nbr_d < 127)))
        std::cout << "char: '" << (char)nbr_d << "'" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
}

void cvt_int(const char *res, double nbr_d, char &end, bool is_float)
{
    if (prt_txtsci(res, t_int) == true)
        return ;
    if (end != '\0' && is_float == false)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nbr_d) << std::endl;
}

bool check_btwfloat(const char *res)
{
    int i;

    i = 0;
    while (res[i])
    {
        if (res[i] == '.')
        {
            i++;
            while (res[i])
            {
                if (res[i] == '0' || res[i] == 'f')
                    i++;
                else
                    return (false);
            }
            if (res[i] == '\0')
                return (true);
        }
        i++;
    }
    return (false);
}

void cvt_float(const char *res, double nbr_d, char &end, bool is_float)
{
    if (prt_txtsci(res, t_float) == true)
        return ;
    if (end == '\0' || is_float == true)
    {
        std::string tmp = res;
        if (check_btwfloat(res) == true)
            std::cout << "float: " << static_cast<float>(nbr_d) << ".0f" << std::endl;
        else if (tmp.find(".") == std::string::npos)
            std::cout << "float: " << static_cast<float>(nbr_d) << ".0f" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(nbr_d) << "f" << std::endl;
    }
    else
        std::cout << "float: impossible" << std::endl;
        
}

void cvt_double(const char *res, double nbr_d, char &end, bool is_float)
{
    if (prt_txtsci(res, t_double) == true)
        return ;
    if (end == '\0' || is_float == true)
    {
        std::string tmp = res;
        if (check_btwfloat(res) == true)
            std::cout << "double: " << static_cast<double>(nbr_d) << ".0" << std::endl;
        else if (tmp.find(".") == std::string::npos)
            std::cout << "double: " << static_cast<double>(nbr_d) << ".0" << std::endl;
        else
            std::cout << "double: " << static_cast<double>(nbr_d) << std::endl;
    }
    else
        std::cout << "double: impossible" << std::endl;
}

int prt_txtsci(const char *res, short type)
{
    if (strcmp(res, "nan") == 0 || strcmp(res, "nanf") == 0)
    {
        if (type == t_char)
            std::cout << "char: imposible" << std::endl;
        else if (type == t_int)
            std::cout << "int: imposible" << std::endl;
        else if (type == t_float)
            std::cout << "float: nanf" << std::endl;
        else
            std::cout << "double: nanf" << std::endl;
        return true;
    }
    else if (strcmp(res, "inf") == 0 || strcmp(res, "inff") == 0 \
          || (strcmp(res, "+inf") == 0 || strcmp(res, "+inff") == 0))
    {
        if (type == t_char)
            std::cout << "char: imposible" << std::endl;
        else if (type == t_int && (strcmp(res, "inf") == 0 || strcmp(res, "+inf") == 0))
            std::cout << "int: -2147483648" << std::endl;
        else if (type == t_int && (strcmp(res, "inff") == 0 || strcmp(res, "+inff") == 0))
            std::cout << "int: impossible" << std::endl;
        else if (type == t_float)
            std::cout << "float: inff" << std::endl;
        else
            std::cout << "double: inf" << std::endl;
        return true;
    }
    else if (strcmp(res, "-inf") == 0 || strcmp(res, "-inff") == 0 )
    {
        if (type == t_char)
            std::cout << "char: imposible" << std::endl;
        else if (type == t_int && (strcmp(res, "-inf") == 0))
            std::cout << "int: -2147483648" << std::endl;
        else if (type == t_int && (strcmp(res, "-inff") == 0))
            std::cout << "int: impossible" << std::endl;
        else if (type == t_double)
            std::cout << "float: -inff" << std::endl;
        else
            std::cout << "double: -inff" << std::endl;
        return true;
    }
    return (false);
}
