/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:22:46 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/19 16:05:24 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point();
		Point(const float xVal, const float yVal);
		Point(const Point& copy);
		~Point();

		Point& operator=(const Point& surcharg);

		Fixed getX() const;
		Fixed getY() const;

};

bool	bsp(Point const a, Point const b, Point const c, Point const p);


#endif