/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:31:28 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/28 15:49:41 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int number;
        static const int bit_num = 8;
    public:
        Fixed();
        Fixed(const Fixed &copy);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBit(int const raw);
		Fixed& operator=(const Fixed& equal);
};



#endif