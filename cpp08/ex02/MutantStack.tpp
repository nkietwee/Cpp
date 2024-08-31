/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 01:27:05 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/31 02:42:33 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_TPP
# define MUTANSTACK_TPP

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return (*this);
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other)
{}

template<typename T>
MutantStack<T>::~MutantStack()
{}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}


#endif