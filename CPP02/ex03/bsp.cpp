/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:44:27 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/19 16:43:32 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"



bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed div = (b.getY() - c.getY()) * (a.getX() - c.getX()) + 
				(c.getX() - b.getX()) * (a.getY() - c.getY());
	
	Fixed coef1 = ((b.getY() - c.getY()) * (p.getX() - c.getX()) +
					(c.getX() - b.getX()) * (p.getY() - c.getY())) / div;
	
	Fixed coef2 = ((c.getY() - a.getY()) * (p.getX() - c.getX()) +
					(a.getX() - c.getX()) * (p.getY() - c.getY())) / div;
	
	Fixed coef3 = Fixed(1.0f) - coef1 - coef2;
	
	return ((coef1 > Fixed(0)) && (coef2 > Fixed(0)) && (coef3 > Fixed(0)));
}