/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:00:27 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 21:09:24 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	this->type = "Dog";
	cout << "Dog : Default constructor called" << endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	brain = new Brain(*copy.brain);
	cout << "Dog : copy construcor called" << endl;
}

Dog& Dog::operator=(const Dog& equal)
{
	if (this != &equal)
	{
		Animal::operator=(equal);
		delete brain;
		brain = new Brain(*equal.brain);
	}
	cout << "Dog : assignment operator called" << endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	cout << "Dog : Default destrucor called" << endl;
}

void	Dog::makeSound() const 
{
	cout << "Wouaf Wouaf" << endl;
}

Brain*	Dog::getBrain() const 
{
	return (brain);
}