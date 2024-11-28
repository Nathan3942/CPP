/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:21:17 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/28 17:01:11 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIMONTRAP_H
#define DIMONTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap& copy);
		virtual ~DiamondTrap();

		DiamondTrap&	operator=(const DiamondTrap& equal);

		void	whoAmI(void);
		// // void	attack(const std::string target);
		void	annonce() const;
};

#endif