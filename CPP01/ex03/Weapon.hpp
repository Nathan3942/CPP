/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:46:22 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/24 04:47:51 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;
    public:
		Weapon(const std::string& initialType);
		~Weapon();
		const std::string&	getType() const;
		void	setType(const std::string& newType);
};



#endif