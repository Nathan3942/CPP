/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:33:01 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/21 17:21:34 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
#define FLAGTRAP_H

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(std::string name);
		~FlagTrap();

		void	highFiveGuys(void);
};


#endif