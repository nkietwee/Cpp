/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:14:23 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/24 15:34:58 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"



class AForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern& operator=(const Intern &other);
        Intern(const Intern &other);

        AForm *makeForm(const std::string name, const std::string target) const;
}

std::ostream& operator<<(std::ostream & os, Intern const& other);

#endif