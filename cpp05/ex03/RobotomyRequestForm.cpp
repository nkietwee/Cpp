/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:17:46 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/24 15:39:05 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: AForm("Unnamed", 72, 45) , _name("Unnamed")
{
    std::cout << "[RobotomyRequestForm] constructed called" << std::endl;  
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "[RobotomyRequestForm] deconstructed called" << std::endl;  
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    // std::cout << "[RobotomyRequestForm]Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_sign = false;
    }
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: AForm(other)
{
       std::cout << "[RobotomyRequestForm] Copy constructor called" << std::endl;   
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name)
: AForm(name, 72, 45), _name(name)
{
        // std::cout << "[RobotomyRequestForm] constructed with name called" << std::endl;  
}

std::ostream& operator<<(std::ostream &os, const RobotomyRequestForm &other)
{
    os << "Form [" << other.getName() << "]"
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

std::string	RobotomyRequestForm::getName() const
{
	return (this->_name);
}

bool        RobotomyRequestForm::getSign() const
{
	return (this->_sign);
}

int         RobotomyRequestForm::getGrade_sign() const
{
	return (this->_grade_sign);	
}

int         RobotomyRequestForm::getGrade_exec() const
{
	return (this->_grade_exec);	
}

void		RobotomyRequestForm::beSigned(const Bureaucrat &other)
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
        throw RobotomyRequestForm::GradeTooLowException();
}

std::exception	RobotomyRequestForm::GradeTooHighException()
{
	// std::cout << "Grade too high exception" << std::endl;
    std::invalid_argument excpt("[GradeTooHighException] Grade that ranges from 1 to 150.");
	throw excpt; 
}

std::exception RobotomyRequestForm::GradeTooLowException() const
{
	// std::cout << "Grade too low exception" << std::endl;
    std::invalid_argument excpt ("[GradeTooLowException] Grade that ranges from 1 to 150.");
    throw excpt;
}

// RobotomyRequestForm:
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed


void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::srand(time(NULL)); // get current time
    if (std::rand() % 2 == 0) // random by current time(value from srand(time(NULL))) 
        std::cout << executor.getName() << " has been robotomized successfully." << std::endl;
    else
        std::cout << executor.getName() + " has been robotomized fail." << std::endl;

    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
