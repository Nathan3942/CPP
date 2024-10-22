/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:35:00 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 17:18:25 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string type;
	public:
		Cure();
		Cure(const Cure& copy);
		~Cure();

	Cure&	operator=(const Cure& equal);

	virtual AMateria*    clone() const;
    virtual void    use(ICharacter& target);

};


#endif