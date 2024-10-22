/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:00:27 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 16:17:44 by njeanbou         ###   ########.fr       */
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
	brain = new Brain(*copy.brain);
	std::cout << "Dog : copy construcor called" << std::endl;
}

Dog& Dog::operator=(const Dog& equal)
{
	if (this != &equal)
	{
		Animal::operator=(equal);
		delete brain;
		brain = new Brain(*equal.brain);
	}
	std::cout << "Dog : assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog : Default destrucor called" << std::endl;
}

void	Dog::makeSound() const 
{
	std::cout << "Wouaf Wouaf" << std::endl;
}

Brain*	Dog::getBrain() const 
{
	return (brain);
}