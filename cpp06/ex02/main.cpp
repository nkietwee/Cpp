/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:31:35 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 03:45:21 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>

Base * generate(void)
{
    int time_rand;
    
    srand(time(NULL));
    time_rand = rand() % 3;
    switch (time_rand)
    {
        case (0):
            return new A;
        case (1):
            return new B;
        case (2):
            return new C;
    }
    return NULL;
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p)) // if cast fail return null ptr
        std::cout << p << " is pointer of A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << p << " is pointer of B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << p << " is pointer of C" << std::endl;
}

void identify(Base &p)
{
    try
    {
		(void)dynamic_cast<A &>(p); // if cast fail ,it throws a std::bad_cast exception. 
		std::cout << "p is reference of A" << std::endl;
	}
    catch (std::exception & e){}
	try
    {
		(void)dynamic_cast<B &>(p);
		std::cout << "p is reference of B" << std::endl;	
	}
    catch (std::exception & e) {}
	try
    {
		(void)dynamic_cast<C &>(p);
		std::cout << "p is reference of C" << std::endl;
	}
    catch (std::exception & e) {}
}

int main(void)
{
    Base *ptr1 = new A;
    Base &ref1 = *ptr1;
    identify(ptr1);
    identify(ref1);

    Base *ptr2 = new B;
    Base &ref2 = *ptr2;
    identify(ptr2);
    identify(ref2);
    
    Base *ptr3 = new C;
    Base &ref3 = *ptr3;
    identify(ptr3);
    identify(ref3);
}