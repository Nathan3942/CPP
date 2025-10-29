/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:22:12 by vboxuser          #+#    #+#             */
/*   Updated: 2025/05/15 17:04:22 by njeanbou         ###   ########.fr       */
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


    Fixed x(0.1f);
    Fixed y(0.2f);
    std::cout << x + y << std::endl;

	return (0);

	// Fixed a;
    // Fixed b(10);
    // Fixed c(42.42f);
    // Fixed d(b);

    // std::cout << "a: " << a << std::endl;
    // std::cout << "b: " << b << std::endl;
    // std::cout << "c: " << c << std::endl;
    // std::cout << "d: " << d << std::endl;

    // a = Fixed(123456.4321f);
    // std::cout << "a: " << a << std::endl;

    // std::cout << "a + b: " << a + b << std::endl;
    // std::cout << "a - b: " << a - b << std::endl;
    // std::cout << "a * c: " << a * c << std::endl;
    // std::cout << "a / c: " << a / c << std::endl;

    // std::cout << "Max of a and b: " << Fixed::max(a, b) << std::endl;
    // std::cout << "Min of a and b: " << Fixed::min(a, b) << std::endl;

    // return (0);
}