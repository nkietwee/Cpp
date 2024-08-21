/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 02:12:10 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/21 01:34:51 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat D("D", 100);
        // Form[name, grade_sign, grade_exec]
        Form       tmp("tmp", 150, 10);
        
        std::cout << tmp << std::endl;
        D.signForm(tmp);
        std::cout << tmp << std::endl;
        D.signForm(tmp);

    }
    catch(const std::exception& e) // const std::invalid_argument& e
    {
        std::cerr << e.what() << '\n';
    }
}