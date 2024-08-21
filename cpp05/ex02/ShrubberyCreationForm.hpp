/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:27:59 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/21 16:29:45 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm(const std::string name, const int grade_sign, const int grade_exec);

    std::exception GradeTooLowException();
    std::exception GradeTooHighException();

    virtual std::string getName() const = 0;
    virtual bool getSign() const = 0;
    virtual int getGrade_sign() const = 0;
    virtual int getGrade_exec() const = 0;
    virtual void beSigned(const Bureaucrat &other) = 0;
    virtual void execute(const Bureaucrat &other) = 0;

private:
    const std::string _name;
    bool _sign;
    const int _grade_sign = 145;
    const int _grade_exec = 137;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &other);

#endif