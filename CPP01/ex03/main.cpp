/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:31:13 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/21 15:54:33 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("Vandal");
		HumanA bob("bob", club);
		bob.attack();
		club.setType("Phantom");
		bob.attack();
	}
	{
		Weapon club = Weapon("Vandal");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("Phantom");
		jim.attack();
	}
	return (0);
}