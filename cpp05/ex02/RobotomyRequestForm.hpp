/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:24:11 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/25 16:44:37 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib> 

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm(const std::string name);

        std::exception GradeTooLowException() const;
        std::exception GradeTooHighException();

        virtual std::string getName() const;
        virtual bool getSign() const;
        virtual int getGrade_sign() const;
        virtual int getGrade_exec() const;
        virtual void beSigned(const Bureaucrat &other);
        virtual void execute(const Bureaucrat &executor) const;

    private:
        const std::string _name;
        bool _sign;
        const int _grade_sign;
        const int _grade_exec;
};

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &other);

#endif