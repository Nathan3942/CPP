/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 02:08:53 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 11:34:14 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main ()
{
    Zombie* bobyZomboss = newZombie("bobZomboss");
    bobyZomboss->annonce();
    delete bobyZomboss;

    randomChrump("kaka");

    return (0);
}