/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 03:26:10 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/31 02:23:47 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> tmp;

    tmp.push_back(3);
    tmp.push_back(5);
    tmp.push_back(30);
    tmp.push_back(22);
    tmp.push_back(4);
    
    // print value
    for (int i = 0; i < tmp.end() - tmp.begin(); i++)
    {
        std::cout << "vec[" << i  << "] : " << tmp[i] << std::endl;
    }
    std::cout << std::endl;
   
    // // test easy find with throw an exception
    // try
    // {
    //     std::string err_msg = "Not found";
    //     // bool res = easyfind(tmp, 10); //not found
    //     // bool res = easyfind(tmp, 3); // found
    //     // bool res = easyfind(tmp, 22); // found
    //     bool res = easyfind(tmp, 33); // not found
    //     if (res == 0)
    //         throw (err_msg);
    //     else
    //         std::cout << "found" << std::endl;
    // }
    // catch(std::string msg)
    // {
    //     std::cout << msg << std::endl;
    // } 
    // std::cout << std::endl;
    
    // test easy find with show error
    bool found = easyfind(tmp, 2);
    std::cout << "Output: " << (found ? "Found" : "Not Found") << std::endl;
    
}


