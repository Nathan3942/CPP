/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:48:41 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/28 19:17:11 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Kaka");
    ScavTrap boba("boba");
    ClapTrap carlos("Carlos");

    scav.attack("Boba");
    boba.takeDamage(scav.getAD());
    boba.beRepaired(20);
    scav.guardGate();
    scav.guardGate();

    boba.attack("Carlos");
    carlos.takeDamage(boba.getAD());
    carlos.beRepaired(50);

    return (0);
}
