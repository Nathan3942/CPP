/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:21:17 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/21 17:24:26 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIMONTRAP_H
#define DIMONTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		~DiamondTrap();

		void	whoAmI(void);
		void	attack(const std::string target);
};

#endif