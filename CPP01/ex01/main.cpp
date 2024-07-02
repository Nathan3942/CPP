/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 03:51:04 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 04:02:19 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie* horde = zombieHorde(10, "kaka");
    for (int i = 0; i < 10; i++)
        horde[i].annonce();

    delete[] horde;
    return (0);
}
