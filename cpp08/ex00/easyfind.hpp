/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 03:20:41 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/29 18:03:53 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <iostream>
# include <string>

template <typename T>
bool easyfind(T &x, int find);

template <typename T>
std::ostream& operator<<(std::ostream &os, const std::vector<T> &tmp)
{
    typename T::const_iterator it;
    for (it = tmp.begin(); it != tmp.end(); ++it)
    {
        os << *it << " ";
    }
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream &os, std::string tmp) {
    return os << std::string(tmp);
}

template <typename T>
bool easyfind(T &x, int find)
{
    for (typename T::size_type it = 0; it < x.size(); it++)
    {
        if (x[it] == find)
            return (true);
    }
    return (false);
}

#endif