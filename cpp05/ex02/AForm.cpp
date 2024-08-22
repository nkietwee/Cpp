/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:21:07 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/22 21:34:44 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :_name("Unnamed"), _sign(false), _grade_sign(0), _grade_exec(0)
{
    std::cout << "[AForm] constructed called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "[AForm] deconstructed called" << std::endl;    
}

AForm& AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->_sign = other._sign;
    }
    return (*this);
}