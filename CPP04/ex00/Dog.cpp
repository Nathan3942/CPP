/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:00:27 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 19:28:26 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	cout << "Dog : Default constructor called" << endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	cout << "Dog : copy construcor called" << endl;
}

Dog& Dog::operator=(const Dog& equal)
{
	if (this != &equal)
		this->type = equal.type;
	cout << "Dog : assignment operator called" << endl;
	return (*this);
}

Dog::~Dog()
{
	cout << "Dog : Default destrucor called" << endl;
}

void	Dog::makeSound() const 
{
	cout << "Wouaf Wouaf" << endl;
}