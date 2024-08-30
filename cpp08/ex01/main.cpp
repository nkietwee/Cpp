/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:38:44 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/31 00:54:16 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	try 
	{
		Span sp(10001);

		sp.addRangeNumber(0, 10000);
		
		unsigned int lg = sp.longestSpan();
		unsigned int st = sp.shortestSpan();
		
		std::cout << "longestSpan : " << lg << std::endl;
		std::cout << "shortestSpan : " << st << std::endl;

	}
	catch (std::string err_msg)
	{
		std::cout << err_msg << std::endl;
	}
} 


// int main(void)
// {
// 	try 
// 	{
// 		Span sp(5);

// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(11);
// 		sp.addNumber(1);
// 		// std::cout << sp.getSizeCurrent() << std::endl;
// 		unsigned int lg = sp.longestSpan();
// 		unsigned int st = sp.shortestSpan();
		
// 		std::cout << "lg : " << lg << std::endl;
// 		std::cout << "st : " << st << std::endl;

// 	}
// 	catch (std::string err_msg)
// 	{
// 		std::cout << err_msg << std::endl;
// 	}
// } 
