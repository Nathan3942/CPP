/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:51:36 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 20:02:06 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	cout << "Animal : Default constructor called" << endl;
}

Animal::Animal(string _type) : type(_type)
{
	cout << "Animal : " << type << " constructor called" << endl;
}

Animal::Animal(const Animal& copy) : type(copy.type)
{
	// *this = copy;
	cout << "Animal : " << type << " copy constructor called" << endl;
}

Animal::~Animal()
{
	cout << "Animal : Default destructor called" << endl;
}

Animal& Animal::operator=(const Animal& equal)
{
	if (this != &equal)
		this->type = equal.type;
	cout << "Animal : assignment operator called" << endl;
	return (*this);
}

string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	cout << "Animal makes a generic sound" << endl;
}