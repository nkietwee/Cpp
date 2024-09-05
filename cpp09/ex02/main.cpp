/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:57:57 by nkietwee          #+#    #+#             */
/*   Updated: 2024/09/05 01:43:19 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

double	getExecTime(struct timeval & start)
{
	struct timeval	end;
	double			timeTaken;

	gettimeofday(&end, NULL);
	timeTaken = end.tv_sec - start.tv_sec;
	timeTaken += (end.tv_usec - start.tv_usec) * 1e-6;
	return timeTaken;
}

int main(int ac, char **av)
{
	(void)av;
	try
	{
		if (ac < 3)
		{
			std::cerr << "[Expected Input] ./PmergeMe 3 5 9 7 4" << std::endl;
			return (false);
		}
		PmergeMe m;
		struct timeval	start;
		
		m.init_value(ac);
		m.chk_asd(ac, av);
		
		
		gettimeofday(&start, NULL);
		m.merge_insert_vec(ac, av);
		double vecTime = getExecTime(start);
		
		gettimeofday(&start, NULL);
		m.merge_insert_deque(ac, av);
		double dequeTime = getExecTime(start);
		
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << vecTime << std::endl;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << dequeTime << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}