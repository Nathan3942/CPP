/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:23:10 by vboxuser          #+#    #+#             */
/*   Updated: 2024/12/02 11:21:32 by njeanbou         ###   ########.fr       */
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

bool Fixed::operator>(const Fixed &value) const
{
	return (this->number > value.number);
}

bool Fixed::operator<(const Fixed &value) const
{
	return (this->number < value.number);
}

bool Fixed::operator>=(const Fixed &value) const
{
	return (this->number >= value.number);
}

bool Fixed::operator<=(const Fixed &value) const
{
	return (this->number <= value.number);
}

bool Fixed::operator==(const Fixed &value) const
{
	return (this->number == value.number);
}

bool Fixed::operator!=(const Fixed &value) const
{
	return (this->number != value.number);
}

Fixed Fixed::operator+(const Fixed &value) const
{
	Fixed result;
	result.number = this->number + value.number;
	return (result);
}

Fixed Fixed::operator-(const Fixed &value) const
{
	Fixed result;
	result.number = this->number - value.number;
	return (result);
}

Fixed Fixed::operator*(const Fixed &value) const
{
	Fixed result;
	result.number = static_cast<int>((static_cast<long long>(this->number) * value.number) >> bit_num);
	return (result);
}

Fixed Fixed::operator/(const Fixed &value) const
{
	Fixed result;
	result.number = static_cast<int>((static_cast<long long>(this->number) << bit_num) / value.number);
	return (result);
}

Fixed &Fixed::operator++()
{
	this->number++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->number--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--(*this);
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	// os << fixed.toFloat();
	os << std::setprecision(8) << fixed.toFloat();
	return (os);
}