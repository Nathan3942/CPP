/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:22:58 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/24 18:08:27 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXE_H
#define FIXE_H

#include <iostream>

class Fixed
{
	private:
		int 				number;
		static const int	bit_num = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& surcharg);
		~Fixed();
		int	getRawBits() const;
		void	setRawBits(int const raw);
};



#endif