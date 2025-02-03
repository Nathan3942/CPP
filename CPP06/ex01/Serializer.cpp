/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:01:12 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/03 15:22:19 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    
}

Serializer::Serializer(const Serializer& copy)
{
    *this = copy;
}

Serializer&	Serializer::operator=(const Serializer& equal)
{
    if (this != &equal)
        *this = equal;
    return (*this);
}

Serializer::~Serializer()
{
    
}

uintptr_t	Serializer::serializer(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}