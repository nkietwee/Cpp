/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:32:33 by nkietwee          #+#    #+#             */
/*   Updated: 2024/08/27 02:08:39 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Data.hpp"
# include "Serializer.hpp"


// Use serialize() on the address of the Data object and pass its return value to
// deserialize(). Then, ensure the return value of deserialize() compares equal to the
// original pointer.
int main(void)
{
    Data d;
    Data *d_ptr1;
    uintptr_t res_uint;
    Data *d_ptr2;

    d.name = "Nawaporn";
    d.surname = "Kietweerachon";
    d.intra = "nkietwee";
    d_ptr1 = &d;
    std::cout << "Before : " << d_ptr1 << std::endl;
    
    // cast from Data * to uintptr_t
    res_uint = Serializer::serialize(d_ptr1);
    std::cout << "Serialize : " << &res_uint << std::endl;
    
    // cast from uintptr_t to original Data *
    d_ptr2 = Serializer::deserialize(res_uint);
    std::cout << "Deserialize : " << d_ptr2 << std::endl;        
}