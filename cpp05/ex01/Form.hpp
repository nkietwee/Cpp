/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:23:31 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/20 15:22:51 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string> 

# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    public:
        Form();
        ~Form();
        Form& operator=(const Form &other);
		Form(const Form &other);
        Form(const std::string name, const int grade_sign, const int grade_exec);

		std::exception GradeTooLowException();
		std::exception GradeTooHighException();

		std::string	getName() const;
        bool	getSign() const; // sign or not
		int	getGrade_sign() const;
		int	getGrade_exec() const;
		
		void beSigned(const Bureaucrat &other);
		
    private:
        const std::string _name;
        bool		_sign; // 1 is sign 0 is not sign
		const int	_grade_sign;
		const int	_grade_exec;

};

std::ostream& operator<<(std::ostream &os, const Form &other);

#endif