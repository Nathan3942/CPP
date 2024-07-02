/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:31:18 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/28 16:27:25 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : number(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Constructor copy called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int value)
{
    this->number = value << bit_num;
}

Fixed::Fixed(const float value)
{
    this->number = static_cast<int>(roundf(value * (1 << bit_num)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& equal)
{
    if (this != &equal)
        this->number = equal.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "Fonction getrawbit" << std::endl;
    return (this->number);
}

void    Fixed::setRawBit(int const raw)
{
    this->number = raw;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->number) / (1 << bit_num));
}

int Fixed::toInt(void) const
{
    return (this->number >> bit_num);
}

std::ostream& operator<<(std::ostream& sortie, const Fixed& other)
{
    sortie << other.toFloat();
    return (sortie); 
}
