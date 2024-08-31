/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 01:16:17 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/31 02:36:00 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack& operator=(const MutantStack &other);
		MutantStack(const MutantStack &other);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin();
		iterator	end();

};

#include "MutantStack.tpp"

#endif