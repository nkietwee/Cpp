/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 22:02:48 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/25 14:52:49 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() :_name("Unname"), _sign(false), _grade_sign(0), _grade_exec(0)
{
    std::cout << "Constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Deconstructor called" << std::endl;
}

Form& Form::operator=(const Form &other)
{
    if (this != &other)
    {
        this->_sign = other._sign;
    // Note: _name, _grade_sign, and _grade_exec are const, so they cannot be reassigned
    }
    return (*this);
}

// Using an Initializer List(Declare external function) because class have const value 
Form::Form(const std::string name, const int grade_sign, const int grade_exec)
:_name(name), _sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{}

Form::Form(const Form &other)
: _name(other._name), _sign(other._sign), _grade_sign(other._grade_sign), _grade_exec(other._grade_exec)
{}


std::exception Form::GradeTooLowException()
{
    std::invalid_argument except("[GradeTooLowException] Grade that ranges from 1 to 150.");
    return (except);
}

std::exception Form::GradeTooHighException()
{
    std::invalid_argument except("[GradeTooHighException] Grade that ranges from 1 to 150.");
    return (except);
}

std::string	Form::getName() const
{
    return (this->_name);
}

bool	Form::getSign() const // sign or not
{
    return (this->_sign);
}

int	Form::getGrade_sign() const
{
    return(this->_grade_sign);
}

int	Form::getGrade_exec() const
{
    return(this->_grade_exec);    
}

void Form::beSigned(const Bureaucrat &other)
{
    if (this->_sign == true)
    {
        std::cout << "Form " << this->_name <<  " is alredy signed. " << std::endl;    
        return ;
    }
    if (other.getGrade() <= this->_grade_sign) // <= morethan
    { 
        this->_sign = true;
        std::cout << "Bureaucrat[" << other.getName() << "] signed " << this->_name << std::endl;
    }
    else
        throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &os, const Form &other)
{
    os << "Form " << "[" << other.getName() << "]"
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
