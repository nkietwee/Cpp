/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 04:39:13 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 13:04:06 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &x, T &y)
{
    T tmp;
    
    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T const& max(T const &x, T const &y)
{
    return (x > y) ? x : y;
}

template <typename T>
T const & min(T const &x, T const &y)
{
    return (x < y) ? x : y;
}
 
#endif