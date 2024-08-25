/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:21:07 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/25 14:00:05 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :_name("Unnamed"), _sign(false), _grade_sign(0), _grade_exec(0)
{
    std::cout << "[AForm] constructed called" << std::endl;
}

AForm::~AForm()
{
    // std::cout << "[AForm] deconstructed called" << std::endl;    
}

AForm& AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->_sign = other._sign;
    }
    return (*this);
}

AForm::AForm(const AForm &other)
: _name(other._name), _sign(false), _grade_sign(other._grade_sign), _grade_exec(other._grade_exec)
{}

AForm::AForm(const std::string name, const int grade_sign, const int grade_exec)
: _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec), _sign(false)
{
    // std::cout << "[AForm] constructed with name called" << std::endl;
    if (this->_grade_sign < 1 || this->_grade_exec < 1)
        throw (AForm::GradeTooHighException());
    else if (this->_grade_sign > 150 || this->_grade_exec > 150)
        throw (AForm::GradeTooHighException());
    // std::cout << "AForm[" << this->_name << "] "
	// << "grade_exec : " << this->_grade_exec
	// << " grade_sign : " << this->_grade_sign
	// << " was created" << std::endl;
}

std::exception AForm::GradeTooLowException()
{
    std::invalid_argument excpt("[GradeTooLowException] Grade that ranges from 1 to 150.");
    return (excpt);
}

std::exception AForm::GradeTooHighException()
{
    std::invalid_argument excpt("[GradeTooHighException] Grade that ranges from 1 to 150.");
    return (excpt);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool        AForm::getSign() const
{
	return (this->_sign);
}

int         AForm::getGrade_sign() const
{
	return (this->_grade_sign);	
}

int         AForm::getGrade_exec() const
{
	return (this->_grade_exec);	
}

void		AForm::beSigned(const Bureaucrat &other)
{
	if (this->_sign == true)
    {
        std::cout << "Form " << this->_name <<  " is alredy signed. " << std::endl;    
        return ;
    }
    if (other.getGrade() <= this->_grade_sign) // <= morethan
    { 
        this->_sign = true;
        std::cout << "AForm[" << other.getName() << "] signed " << this->_name << std::endl;
    }
    else
        throw AForm::GradeTooLowException();	
}

void        AForm::execute(const Bureaucrat &other) const
{
	(void)other;
	std::cout << "AForm executed." << std::endl;
}

std::ostream &operator<<(std::ostream &os, const AForm &other)
{
        os << "AForm " << "[" << other.getName() << "]"
        << " Grade required to sign is " << other.getGrade_sign()
		<< " Grade required to execute is " << other.getGrade_exec()
		<< " [";
    if (other.getSign())
		os << "signed";
    else
        os << "unsigned" ;
    os << "]";
    return os;
}
