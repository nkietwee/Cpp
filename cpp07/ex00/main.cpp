/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:19:18 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/28 17:20:21 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    int a = 2;
    int b = 3;
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    // ::swap( a, b );
    swap( a, b );
    std::cout << "Original" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl; 
   
    std::cout << "Swap" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    swap(c, d);
    std::cout << std::endl;
    std::cout << "Original" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
     
    std::cout << "Swap" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}