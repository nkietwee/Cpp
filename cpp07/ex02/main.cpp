/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:48:55 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/28 16:58:35 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp" 
#include <iostream>


int	main() {
    
	srand(time(NULL));
    int n = rand()%10;
	Array<int> arr_t(n);
	int *checker = new int[n];

	// Assign value
	for (int i = 0; i < n ; i++)
	{
		const int value = rand();
		arr_t[i] = value;
		checker[i] = value;
	}

	// Print value
	for (int i = 0; i < n; i++)
	{
		std::cout << "Arr: " << arr_t[i] << ", Checker: " << checker[i] << std::endl; 
	}
    
    try
    {
		std::cout << arr_t[n + 5] << std::endl;
	}
    catch (const std::exception& e)
    {
		std::cout << e.what() << std::endl;
	}
	delete [] checker;
}
