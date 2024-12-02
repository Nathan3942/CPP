/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:34:12 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/29 16:43:38 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:
        bool guard_mode;

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        virtual ~ScavTrap();

        ScavTrap&   operator=(const ScavTrap& equal);

        void	attack(const std::string& target);

        int getPV() const;
        int getPE() const;
        int getAD() const;

        void    guardGate();
};



#endif