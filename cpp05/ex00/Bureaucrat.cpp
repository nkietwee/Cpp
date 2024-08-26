/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 02:09:28 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 04:01:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unname") , _grade(0)
{
    // std::cout << "[Default] Constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    // std::cout << "[Name] Constructor Bureaucrat called" << std::endl;
    this->_name = name;
    this->_grade = grade;
    if (this->_grade < 1)
        throw (GradeTooHighException());
    else if (this->_grade > 150)
        throw (GradeTooHighException());
    std::cout << "Bureaucrat[" << this->_name << "] " << "grade : " << this->_grade << " was created" << std::endl;   
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Deconstructor Bureaucrat called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_grade = other._grade;
        this->_name = other._name;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);   
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::decrement(int nbr)
{
    this->_grade = this->_grade + nbr;
    if (this->_grade > 150)
        throw (GradeTooLowException());
    std::cout << "[Decrement] Bureaucrat[" << this->_name << "] " << "grade : " << this->_grade << " was created" << std::endl; 
}

void	Bureaucrat::increment(int nbr)
{
    this->_grade = this->_grade - nbr;
    if (this->_grade < 1)
        throw (GradeTooHighException());
    std::cout << "[Increment] Bureaucrat[" << this->_name << "] " << "grade : " << this->_grade << " was created" << std::endl; 
}


// std::invalid_argument derived from std::logic_error, which in turn is derived from std::exception.
std::exception	Bureaucrat::GradeTooHighException()
{
	// std::cout << "Grade too high exception" << std::endl;
    std::invalid_argument excpt("[GradeTooHighException] Grade that ranges from 1 to 150.");
	throw excpt; 
}

std::exception Bureaucrat::GradeTooLowException()
{
	// std::cout << "Grade too low exception" << std::endl;
    std::invalid_argument excpt("[GradeTooLowException] Grade that ranges from 1 to 150.");
    throw excpt;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat&obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (os);
}