/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:32:35 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/24 14:42:26 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("Unnamed", 25, 5), _name("Unnamed")
{
    std::cout << "[PresidentialPardonForm] constructed called" << std::endl;  
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "[PresidentialPardonForm] deconstructed called" << std::endl;  
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    // std::cout << "[PresidentialPardonForm]Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_sign = false;
    }
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
: AForm(other)
{
    std::cout << "[PresidentialPardonForm] Copy assignment operator called" << std::endl;
    *this = other;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name)
: AForm(name, 25, 5), _name(name)
{
        std::cout << "[PresidentialPardonForm] constructed with name called" << std::endl;  
}

std::exception PresidentialPardonForm::GradeTooLowException() const
{
    std::invalid_argument excpt("[GradeTooHighException] Grade that ranges from 1 to 150.");
	throw excpt; 
}

std::exception PresidentialPardonForm::GradeTooHighException()
{
    std::invalid_argument excpt("[GradeTooHighException] Grade that ranges from 1 to 150.");
	throw excpt; 
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &other)
{
	os << "PresidentialPardonForm [" << other.getName() << "]"
	<< "grade_exec : " << other.getGrade_exec()
	<< "grade_sign : " << other.getGrade_sign()
    << " [";
    if (other.getSign())
		os << "signed";
    else
        os << "unsigned" ;
    os << "]";
	return os;
}

std::string	PresidentialPardonForm::getName() const
{
	return this->_name;
}

int	PresidentialPardonForm::getGrade_exec() const
{
	return this->_grade_exec;
}

int	PresidentialPardonForm::getGrade_sign() const
{
	return this->_grade_sign;
}

bool PresidentialPardonForm::getSign() const
{
    return this->_sign;
}


void		PresidentialPardonForm::beSigned(const Bureaucrat &other)
{
     if (this->_sign == true)
    {
        std::cout << "Form " << this->_name <<  " is alredy signed. " << std::endl;    
        return ;
    }
    if (other.getGrade() <= this->_grade_sign) // <= morethan
    { 
        this->_sign = true;
        std::cout << "PresidentialPardonForm[" << other.getName() << "] signed " << this->_name << std::endl;
    }
    else
        throw PresidentialPardonForm::GradeTooLowException();
}

void        PresidentialPardonForm::execute(const Bureaucrat &other) const
{
    // std::cout << "other.getgrade : " << other.getGrade() << std::endl;
    // std::cout << "this->_grade_Exec : " << this->_grade_exec << std::endl;
    if (other.getGrade() <= this->_grade_exec)
	{
		std::cout << other.getName()
				  << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
		throw PresidentialPardonForm::GradeTooLowException();
}
