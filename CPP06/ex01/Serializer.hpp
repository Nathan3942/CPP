/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:00:56 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/03 15:22:45 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <stdint.h>
#include <iostream>

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer& copy);
        Serializer&	operator=(const Serializer& equal);
		~Serializer();

    public: 
        static uintptr_t	serializer(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
};

#endif