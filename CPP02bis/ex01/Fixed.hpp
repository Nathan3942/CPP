/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:31:28 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/28 16:24:02 by vboxuser         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& sortie, const Fixed &other);


#endif