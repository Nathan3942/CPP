/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:10:07 by njeanbou          #+#    #+#             */
/*   Updated: 2024/09/03 12:24:16 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog : Default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    this->brain = new Brain(*copy.brain);
    std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog : Default destructor called" << std::endl;
}

Dog&    Dog::operator=(const Dog& equal)
{
    if (this != &equal)
    {
        Animal::operator=(equal);
        delete brain;
        this->brain = new Brain(*equal.brain);
    }
    std::cout << "Dog : Assignment operator called" << std::endl;
    return (*this);
}

std::string Dog::getType() const
{
    return (this->type);
}

Brain*  Dog::getBrain() const
{
    return (brain);
}

void    Dog::makeSound() const
{
    std::cout << this->type << " : Ouaf Ouaf" << std::endl;
}