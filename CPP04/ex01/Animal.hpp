/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:47:02 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 20:49:49 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
using namespace std;

class Animal
{
    protected:
        string type;

    public:
        Animal();
        Animal(string _type);
        Animal(const Animal& copy);
        virtual ~Animal();

        Animal& operator=(const Animal& equal);

        string getType() const;
        virtual void    makeSound() const;

};


#endif