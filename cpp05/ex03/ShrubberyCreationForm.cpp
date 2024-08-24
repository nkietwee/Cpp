/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:52:27 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/24 15:39:14 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("Unnamed", 145, 137), _name("Unnamed")
{
    std::cout << "[ShrubberyCreationForm] constructed called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "[ShrubberyCreationForm] deconstructed called" << std::endl;  
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    // std::cout << "[ShrubberyCreationForm] Copy constructor called" << std::endl;
    if (this != &other)
    {
        this->_sign = false;
    }
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: AForm(other)
{
       std::cout << "[ShrubberyCreationForm] Copy assignment operator called" << std::endl;   
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name)
: AForm(name, 145, 135), _name(name)
{
        std::cout << "[ShrubberyCreationForm] constructed with name called" << std::endl;  
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &other)
{
 	os << "ShrubberyCreationForm [" << other.getName() << "]"
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

std::string	ShrubberyCreationForm::getName() const
{
	return this->_name;
}

int	ShrubberyCreationForm::getGrade_exec() const
{
	return this->_grade_exec;
}

int	ShrubberyCreationForm::getGrade_sign() const
{
	return this->_grade_sign;
}

bool ShrubberyCreationForm::getSign() const
{
    return this->_sign;
}

std::exception ShrubberyCreationForm::GradeTooLowException() const
{
    std::invalid_argument excpt("[GradeTooHighException] Grade that ranges from 1 to 150.");
	throw excpt; 
}

std::exception ShrubberyCreationForm::GradeTooHighException()
{
    std::invalid_argument excpt("[GradeTooHighException] Grade that ranges from 1 to 150.");
	throw excpt; 
}

void		ShrubberyCreationForm::beSigned(const Bureaucrat &other)
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
        throw ShrubberyCreationForm::GradeTooLowException();
}

// Function to generate ASCII trees
std::string ShrubberyCreationForm::generateTree() const
{
    return "   *\n"
           "  ***\n"
           " *****\n"
           "*******\n"
           "   |\n";
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream file;
	if (executor.getGrade() <= this->_grade_exec)
	{
		std::cout << "ShrubberyCreationForm executed by "
			<< executor.getName()
			<< "! Creating a file..." << std::endl;
		file.open(this->_name + "_shrubbery");
		if (!file)
			throw std::runtime_error("[ShrubberyCreationForm] Error opening file for writing\n");
		file << generateTree();
		file.close();
	}
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}