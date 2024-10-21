/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:48:41 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/19 17:57:37 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap boba("Boba");
	ClapTrap kaka("Kaka");

	boba.attack("Kaka");
	kaka.takeDamage(0);
	boba.attack("Kaka");
	kaka.takeDamage(0);
	boba.attack("Kaka");
	kaka.takeDamage(0);
	kaka.beRepaired(2);
	return (0);
}