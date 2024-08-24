/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:22:20 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/24 14:17:40 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string> 

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
		PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm(const std::string name);

		std::exception GradeTooLowException() const;
		std::exception GradeTooHighException();

		virtual std::string	getName() const;
        virtual bool        getSign() const;
        virtual int         getGrade_sign() const;
		virtual int         getGrade_exec() const;
		virtual void		beSigned(const Bureaucrat &other);
        virtual void        execute(const Bureaucrat &other) const;
		
    private:
        const std::string	_name;
        bool				_sign;
		const int			_grade_sign = 25;
		const int			_grade_exec = 5;

};

std::ostream& operator<<(std::ostream &os, const PresidentialPardonForm &other);

#endif