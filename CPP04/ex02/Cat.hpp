/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:09:39 by njeanbou          #+#    #+#             */
/*   Updated: 2024/09/03 12:21:10 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain*  brain;

    public:
        Cat();
        Cat(const Cat& copy);
        ~Cat();

        Cat&    operator=(const Cat& equal);

        std::string getType() const;
        Brain*  getBrain() const;
        void    makeSound() const;
};


#endif