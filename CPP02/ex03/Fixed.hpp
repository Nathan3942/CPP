/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:22:58 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/26 18:24:03 by vboxuser         ###   ########.fr       */
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
		~Fixed();
		
		Fixed& operator=(const Fixed& surcharg);
		
		int	getRawBits() const;
		void	setRawBits(int const raw);
		int	toInt() const;
		float toFloat() const;

		bool operator>(const Fixed &value) const;
		bool operator<(const Fixed &value) const;
		bool operator>=(const Fixed &value) const;
		bool operator<=(const Fixed &value) const;
		bool operator==(const Fixed &value) const;
		bool operator!=(const Fixed &value) const;

		Fixed operator+(const Fixed &value) const;
		Fixed operator-(const Fixed &value) const;
		Fixed operator*(const Fixed &value) const;
		Fixed operator/(const Fixed &value) const;

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif