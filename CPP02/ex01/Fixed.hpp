/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:22:58 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 14:16:51 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXE_H
#define FIXE_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int 				number;
		static const int	bit_num = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed& operator=(const Fixed& surcharg);
		~Fixed();
		int	getRawBits() const;
		void	setRawBits(int const raw);
		int	toInt() const;
		float toFloat() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif