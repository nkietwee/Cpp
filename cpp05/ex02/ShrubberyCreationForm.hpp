/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:27:59 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/25 16:36:24 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>  // Include this for std::ofstream


# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ShrubberyCreationForm(const std::string name);

        std::exception GradeTooLowException() const;
        std::exception GradeTooHighException();

        virtual std::string getName() const;
        virtual bool getSign() const;
        virtual int getGrade_sign() const;
        virtual int getGrade_exec() const;
        virtual void beSigned(const Bureaucrat &other);
        virtual void execute(const Bureaucrat &executor) const;

        std::string generateTree() const;
    private:
        const std::string _name;
        bool _sign;
        const int _grade_sign;
        const int _grade_exec;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &other);

#endif