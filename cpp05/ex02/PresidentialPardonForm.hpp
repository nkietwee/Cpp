/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:22:20 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/21 16:25:22 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string> 

# include "Bureaucrat.hpp"
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
		PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm(const std::string name, const int grade_sign, const int grade_exec);

		std::exception GradeTooLowException();
		std::exception GradeTooHighException();

		virtual std::string	getName() const = 0;
        virtual bool        getSign() const = 0;
        virtual int         getGrade_sign() const = 0;
		virtual int         getGrade_exec() const = 0;
		virtual void		beSigned(const Bureaucrat &other) = 0;
        virtual void        execute(const Bureaucrat &other) = 0;
		
    private:
        const std::string	_name;
        bool				_sign;
		const int			_grade_sign = 25;
		const int			_grade_exec = 5;

};

std::ostream& operator<<(std::ostream &os, const PresidentialPardonForm &other);

#endif