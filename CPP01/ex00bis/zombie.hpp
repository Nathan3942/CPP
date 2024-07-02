/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 02:13:54 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 03:12:23 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
    	std::string name;

    public:
		Zombie(std::string name);
		~Zombie();
    	void    annonce();
};


Zombie* newZombie(std::string name);
void    randomChrump(std::string name);

#endif