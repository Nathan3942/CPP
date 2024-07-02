/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:36:41 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 03:11:32 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



int main()
{
    Zombie* bobZombie = newZombie("bobZombie");
    bobZombie->annonce();
    delete bobZombie;

    randomChump("ramZombie");
    return (0);
}
