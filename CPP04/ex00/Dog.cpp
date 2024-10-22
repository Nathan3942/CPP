/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:00:27 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 16:14:15 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog : Default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog : copy construcor called" << std::endl;
}

Dog& Dog::operator=(const Dog& equal)
{
	if (this != &equal)
		this->type = equal.type;
	std::cout << "Dog : assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog : Default destrucor called" << std::endl;
}

void	Dog::makeSound() const 
{
	std::cout << "Wouaf Wouaf" << std::endl;
}