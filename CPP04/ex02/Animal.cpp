/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:09:21 by njeanbou          #+#    #+#             */
/*   Updated: 2024/09/03 11:41:37 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() : type("Animal")
{
    std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) : type(copy.type)
{
    std::cout << "Animal : Copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal : Default destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& equal)
{
    if (this != &equal)
    {
        this->type = equal.type;
    }
    std::cout << "Animal : operator assignment called" << std::endl;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void    Animal::makeSound() const
{
    std::cout << this->type << " make a generic sound" << std::endl;
}

