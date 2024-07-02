/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 03:15:20 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 03:53:57 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie() {}
        Zombie(std::string& name) {}
        ~Zombie();
        void    setName(std::string& name);
        void    annonce();
};



Zombie* zombieHorde(int N, std::string name);


#endif