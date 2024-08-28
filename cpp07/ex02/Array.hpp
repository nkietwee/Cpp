/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:22:16 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/28 15:12:39 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>

template <class T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array& operator=(const Array &other);
        Array(const Array &other);
        ~Array();
        unsigned int size();

		T&	operator[](long int index) const;

        std::exception OutOfRangeException() const;

    private:
       unsigned int _size;
       T            *_arr;
};

#include "Array.tpp"
#endif
    