/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:11:33 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/28 15:13:03 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Array.hpp"

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array() : _size(1), _arr(new T()) {}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _arr(new T[n]) {}

template<typename T>
Array<T>::Array(Array const& other) : _size(other._size) {
	this->_array = new T[_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
}

template<typename T>
Array<T>&	Array<T>::operator=(Array const& rhs) {
	if (this != &rhs)
	{
		this->_size = rhs._size;
		delete [] this->_array;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
	}
	return *this;
}

template<typename T>
Array<T>::~Array() {
	delete [] _arr;
}

template<typename T>
unsigned int	Array<T>::size()
{
	return this->_size;
}

template<typename T>
std::exception Array<T>::OutOfRangeException() const
{
	std::invalid_argument excpt("[OutOfRangeException]");
	throw excpt;
}

template<typename T>
T&	Array<T>::operator[](long int index) const
{
	if (index < 0 || index >= static_cast<unsigned int>(this->_size))
		throw OutOfRangeException();
	return this->_arr[index];
}

#endif 