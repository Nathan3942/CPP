/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:47:02 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 16:16:23 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string _type);
        Animal(const Animal& copy);
        virtual ~Animal();

        Animal& operator=(const Animal& equal);

        std::string getType() const;
        virtual void    makeSound() const;

};


#endif