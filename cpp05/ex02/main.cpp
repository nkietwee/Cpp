/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 02:12:10 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/24 14:42:12 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat A("A", 2);
 
        // ShrubberyCreationForm B("BB");
        // B.execute(A);
        
        // RobotomyRequestForm C("CC");
        // C.execute(A); 
               
        PresidentialPardonForm D("DD");
        D.execute(A); 
    }
    catch(const std::exception& e) // const std::invalid_argument& e
    {
        std::cerr << e.what() << '\n';
    }
}