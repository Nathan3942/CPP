/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:31:28 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/28 16:35:43 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int number;
        static const int bit_num = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &copy);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBit(int const raw);
		Fixed& operator=(const Fixed& equal);
        float toFloat(void) const;
        int toInt(void) const;

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

std::ostream& operator<<(std::ostream& sortie, const Fixed &other);


#endif