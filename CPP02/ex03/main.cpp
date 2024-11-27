/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:12:24 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/27 14:56:02 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


int main()
{
	Point p(10.0f, 8.0f);
	Point a(10.0f, 12.0f);
	Point b(4.0f, 4.0f);
	Point c(14.0f, 4.0f);

	if (bsp(a, b, c, p))
		std::cout << "Est a l'interieur du triangle" << std::endl;
	else
		std::cout << "N'est pas a l'interieur du triangle" << std::endl;

	return (0);
}
