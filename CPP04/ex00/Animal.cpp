/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:51:36 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 16:13:31 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
	std::cout << "Animal : " << type << " constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) : type(copy.type)
{
	// *this = copy;
	std::cout << "Animal : " << type << " copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal : Default destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& equal)
{
	if (this != &equal)
		this->type = equal.type;
	std::cout << "Animal : assignment operator called" << std::endl;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal makes a generic sound" << std::endl;
}