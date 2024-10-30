/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:12:30 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/30 18:32:54 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class IMateriaSource
{
    public:
        virtual				~IMateriaSource() {}
        virtual void		learnMateria(AMateria*) = 0;
        virtual AMateria*	createMateria(std::string const & type) = 0;
};