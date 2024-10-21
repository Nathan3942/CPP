/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:34:30 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/19 15:42:47 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	
}

Point::Point(const float xVal, const float yVal) : x(xVal), y(yVal)
{
	
}

Point::Point(const Point& copy)
{
	*this = copy;
}

Point& Point::operator=(const Point &surcharg)
{
	if (this != &surcharg)
	{
		const_cast<Fixed&>(this->x) = surcharg.x;
		const_cast<Fixed&>(this->y) = surcharg.y;
	}
	return (*this);
}

Point::~Point()
{
	
}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}