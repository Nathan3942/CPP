/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:31:18 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/28 15:53:13 by vboxuser         ###   ########.fr       */
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

