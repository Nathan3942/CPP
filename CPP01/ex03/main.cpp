/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:31:13 by vboxuser          #+#    #+#             */
/*   Updated: 2024/11/26 11:53:06 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{

	Weapon club = Weapon("Vandal");
	HumanA bob("bob", club);
	bob.attack();
	club.setType("Phantom");
	bob.attack();

	Weapon wp = Weapon("Vandal");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(wp);
	jim.attack();
	wp.setType("Phantom");
	jim.attack();

	return (0);
}