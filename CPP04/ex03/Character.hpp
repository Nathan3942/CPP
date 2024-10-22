/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:36:22 by njeanbou          #+#    #+#             */
/*   Updated: 2024/09/03 16:41:51 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    private:
        std::string _name;
        AMateria*   _inventory[4];

    public:
        Character(std::string name);
        Character(const Character& copy);
        ~Character();

        Character&  operator=(const Character& equal);

        std::string const & getName() const;

        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

};

#endif