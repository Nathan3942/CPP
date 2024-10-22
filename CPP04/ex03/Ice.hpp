/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:03:18 by njeanbou          #+#    #+#             */
/*   Updated: 2024/09/03 16:34:50 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(const Ice& copy);
        ~Ice();

        Ice&    operator=(const Ice& euqal);

        virtual AMateria*    clone() const;
        virtual void    use(ICharacter& target);
};


#endif