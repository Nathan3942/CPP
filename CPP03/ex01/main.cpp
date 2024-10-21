/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:48:41 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/20 17:29:52 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Kaka");
    ScavTrap boba("boba");
    ClapTrap carlos("Carlos");

    scav.attack("Boba");
    boba.takeDamage(20);
    boba.beRepaired(20);
    carlos.beRepaired(50);
    scav.guardGate();

    return (0);
}
