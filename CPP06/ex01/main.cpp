/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:01:40 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/03 15:21:36 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data *data = new Data;
    data->a = "Kaka";
    data->b = 42;
    data->c = "Bobo";

    std::cout << "Data : " << std::endl;
    std::cout << data->a << std::endl;
    std::cout << data->b << std::endl;
    std::cout << data->c << std::endl;

    uintptr_t raw = Serializer::serializer(data);

    std::cout << "Raw : " << std::endl;
    std::cout << raw << std::endl;

    Data *serialized = Serializer::deserialize(raw);

    std::cout << "Serialized : " << std::endl;
    std::cout << serialized->a << std::endl;
    std::cout << serialized->b << std::endl;
    std::cout << serialized->c << std::endl;

    delete data;
    return (0);
}