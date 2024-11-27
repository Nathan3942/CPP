/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:48:41 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/27 19:31:02 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap scav("Kaka");
    FragTrap boba("boba");
    ClapTrap carlos("Carlos");

    scav.attack("Boba");
    boba.takeDamage(scav.getAD());
    boba.beRepaired(20);
    boba.highFiveGuys();

    boba.attack("Carlos");
    carlos.takeDamage(boba.getAD());
    carlos.beRepaired(50);

    FragTrap lala = boba;
    std::cout << std::endl;
    boba.attack("lala");
    lala.takeDamage(boba.getAD());

    return (0);
}
