/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:24:27 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 19:29:28 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	cout << "Cat : Default construcor called" << endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	cout << "Cat : copy constructor called" << endl;
}

Cat& Cat::operator=(const Cat& equal)
{
	if (this != &equal)
		this->type = equal.type;
	cout << "Cat : assignment operator called" << endl;
	return (*this);
}

Cat::~Cat()
{
	cout << "Cat : Default destrucor called" << endl;
}

void	Cat::makeSound() const 
{
	cout << "Miaou Miaou" << endl;
}