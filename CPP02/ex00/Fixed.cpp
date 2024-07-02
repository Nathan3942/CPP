/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:23:10 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/25 14:51:18 by vboxuser         ###   ########.fr       */
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