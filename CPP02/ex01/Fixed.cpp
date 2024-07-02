/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:23:10 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/28 16:24:57 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy construcor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int intValue)
{
	std::cout << "Int contructor called" << std::endl;
	this->number = intValue << bit_num;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = static_cast<int>(roundf(floatValue * (1 << bit_num)));
}

Fixed& Fixed::operator=(const Fixed& surcharg)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &surcharg)
		this->number = surcharg.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Default destructor" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member fonction called" << std::endl;
	return (this->number);
}

void	Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int Fixed::toInt() const
{
	return (this->number >> bit_num);
}
	
float Fixed::toFloat() const 
{
	return (static_cast<float>(this->number) / (1 << bit_num));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}