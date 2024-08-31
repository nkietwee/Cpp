/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 01:17:25 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/31 03:01:44 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	std::stack<int>::container_type::iterator it = mstack.begin();
	std::stack<int>::container_type::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);
}

// int main()
// {
// 	std::list<int> list;
// 	list.push_back(5);
// 	list.push_back(17);
// 	std::cout << list.back() << std::endl;
// 	list.remove(list.back());
// 	std::cout << list.size() << std::endl;
// 	list.push_back(3);
// 	list.push_back(5);
// 	list.push_back(737); //[...] mstack.push(0);
// 	list.push_back(0);
// 	std::list<int>::iterator it = list.begin(); 
// 	std::list<int>::iterator ite = list.end();
// 	++it;
// 	--it;
// 	while (it != ite) {
// 		std::cout << *it << std::endl;
// 		++it; 
// 	}
// 	std::list<int> s(list);
// 	return 0;
// }


