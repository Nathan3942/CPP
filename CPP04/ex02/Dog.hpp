/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:09:57 by njeanbou          #+#    #+#             */
/*   Updated: 2024/09/03 12:17:57 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain*  brain;

    public:
        Dog();
        Dog(const Dog& copy);
        ~Dog();

        Dog&    operator=(const Dog& euqal);

        std::string getType() const;
        Brain*  getBrain() const;
        void    makeSound() const;
};


#endif