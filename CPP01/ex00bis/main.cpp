/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 02:08:53 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 03:14:35 by vboxuser         ###   ########.fr       */
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