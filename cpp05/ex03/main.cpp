/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 02:12:10 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/25 13:55:58 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
		Intern A;
		AForm*	rrf;
		
		// rrf = A.makeForm("test", "test");
	
		rrf = A.makeForm("shrubbery creation", "Bender");
		std::cout << *rrf << std::endl;
		delete rrf;
	
		// rrf = A.makeForm("robotomy request", "Bender");
		// std::cout << *rrf << std::endl;
		// delete rrf;
	
		// rrf = A.makeForm("presidential pardon", "Bender");
		// std::cout << *rrf << std::endl;
		// Bureaucrat	obj("Oven", 2);
		// obj.signForm(*rrf);
		// obj.executeForm(*rrf);
		// delete rrf;
		return (0);
        
    }
    catch(const std::exception& e) // const std::invalid_argument& e
    {
        std::cerr << e.what() << '\n';
    }
}