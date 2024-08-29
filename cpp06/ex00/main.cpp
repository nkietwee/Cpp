/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:36:28 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/29 18:07:48 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    std::string nbr;
    try
    {
        if (ac == 2)
        {
            nbr = av[1];
            ScalarConverter::convert(nbr);
        }
        else
            throw "Expected : <./convert [string]>";
    }
    catch (const char *msg)
    {
        std::cerr << msg << std::endl;
    }
}