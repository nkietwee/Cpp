/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 02:12:10 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/17 17:11:43 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        // // Created
        // Bureaucrat A("A", 1);
        // Bureaucrat B("B", 150);
        
        // // Overflow
        // Bureaucrat C("C", 4);
        // C.increment(10);

        // Overflow
        Bureaucrat D("D", 140);
        D.decrement(30);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}