/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:49:01 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 03:19:52 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie 
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void    annonce(void);

    private:
        std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif