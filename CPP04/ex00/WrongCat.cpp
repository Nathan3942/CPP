/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:49:23 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 19:54:27 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	cout << "WrongCat : Default construcor called" << endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	cout << "WrongCat : copy construcor called" << endl;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat : Default destructor called" << endl;
}

string	WrongCat::getType() const 
{
	return (this->type);
}

void	WrongCat::makeSound() const
{
	cout << "Wrong Miaou Miaou" << endl;
}