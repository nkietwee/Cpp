/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 01:46:36 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/22 21:34:59 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string> 

# include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
    public:
        AForm();
        ~AForm();
        AForm& operator=(const AForm &other);
		AForm(const AForm &other);
        AForm(const std::string name, const int grade_sign, const int grade_exec);

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
		const int			_grade_sign;
		const int			_grade_exec;

};

std::ostream& operator<<(std::ostream &os, const AForm &other);

#endif