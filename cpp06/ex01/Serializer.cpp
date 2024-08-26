/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:11:26 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 02:03:57 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

Serializer& Serializer::operator=(const Serializer &other)
{
    static_cast<void>(other);
    return (*this);
}

// This cast is used for well-defined conversions, typically between related types,
// like converting from one numerical type to another or from a pointer to a more general pointer type.
Serializer::Serializer(const Serializer &other)
{
    static_cast<void>(other);
}

// This cast is used to convert one type into a fundamentally different type,
// even if the types are not related.
uintptr_t Serializer::serialize(Data* ptr)
{
    if (!ptr)
        return (0);
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    if (!raw)
        return (0);
    return reinterpret_cast<Data *>(raw);
}

std::ostream& operator<<(std::ostream &os, Serializer *name)
{
    // os << "name : " << name->name << std::endl;
    // os << "name : " << name->name << std::endl;
	static_cast<void>(name);
    return os;
}
