/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 01:36:28 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 00:27:27 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    // ScalarConverter a;
    // std::string nbr;
    try
    {
        
        if (ac == 2)
        {
            // nbr = av[1];
            
            ScalarConverter::convert(av[1]);
        }
        else
            throw "Expected : <./convert [string]>";
            // throw ("<./convert [string] >");
    }
    catch (const char *msg)
    {
        std::cerr << msg << std::endl;
    }
    // catch (const std::exception &e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }

 
    
}