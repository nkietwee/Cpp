/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 02:12:10 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 04:03:19 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        // // Created
        // Bureaucrat A("A", 1);
        // Bureaucrat B("B", 151);
        
        // // Overflow
        // Bureaucrat C("C", 4);
        // C.increment(10);

        // Overflow
        Bureaucrat D("D", 140);
        D.decrement(30);
    }
    catch(const std::exception& e) // const std::invalid_argument& e
    {
        std::cerr << e.what() << '\n';
    }
}