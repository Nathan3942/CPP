/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:22:12 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 14:25:04 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main ()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(Fixed(5) - Fixed(3));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;

	a = b / 2;
	std::cout << a << std::endl;
	return (0);
}