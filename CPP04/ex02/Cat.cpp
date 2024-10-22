/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:09:50 by njeanbou          #+#    #+#             */
/*   Updated: 2024/09/03 12:26:28 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    this->type = "Cat";
    // this->brain = new Brain();
    std::cout << "Cat : Default constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    this->brain = new Brain(*copy.brain);
    std::cout << "Cat : Copy constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat : Default destructor called" << std::endl;
}

Cat&    Cat::operator=(const Cat& equal)
{
    if (this != &equal)
    {
        Animal::operator=(equal);
        delete brain;
        brain = new Brain(*equal.brain);
    }
    std::cout << "Cat : Assignment opperator called" << std::endl;
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}

Brain*  Cat::getBrain() const
{
    return (brain);
}

void    Cat::makeSound() const
{
    std::cout << this->type << " : Miaou Miaou" << std::endl;
}
