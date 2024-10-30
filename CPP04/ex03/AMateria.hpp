/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:43:58 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/30 18:36:59 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& copy);
        virtual ~AMateria();

        AMateria&   operator=(const AMateria& euqal);

        std::string const & getType() const;

        virtual AMateria*   clone() const = 0;
        virtual void    use(ICharacter& target) = 0;

};

#endif