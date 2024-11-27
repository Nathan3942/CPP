/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:48:41 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/27 20:40:18 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap didi("Didi");

    didi.annonce();

    didi.attack("Kaka");
    didi.whoAmI();
    didi.guardGate();
    didi.highFiveGuys();
    return (0);
}
