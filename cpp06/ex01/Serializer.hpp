/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:10:02 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 01:57:33 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

# include "Data.hpp"

// class Data;

class Serializer
{
    public:
        Serializer();
        Serializer& operator=(const Serializer &other);
        Serializer(const Serializer &other);
        ~Serializer();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

std::ostream& operator<<(std::ostream &os, Serializer *name);

#endif