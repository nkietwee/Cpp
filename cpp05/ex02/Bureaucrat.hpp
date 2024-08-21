/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 01:51:56 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/21 16:20:33 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


# include <iostream>

# include "Form.hpp"
# include "AForm.hpp"

class Form;
class AForm;

// Define some ANSI color codes
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RESET = "\033[0m";

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat &other);
		Bureaucrat(const Bureaucrat &other);

		std::string getName() const;
		int			getGrade() const;
		
		std::exception GradeTooHighException();
		std::exception GradeTooLowException();

		void	increment(int nbr);
		void	decrement(int nbr);

		void 	signForm(Form &form);

		void executeForm(AForm const & form);
	private:
		std::string _name;
		int         _grade;
};

std::ostream& operator<<(std::ostream & os, const Bureaucrat& obj);

#endif