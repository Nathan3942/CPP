/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_ex.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:13:38 by njeanbou          #+#    #+#             */
/*   Updated: 2025/06/02 19:15:55 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_EX_HPP
#define CLASS_EX_HPP

#include <iostream>
#include <string>
#include <memory>

class test
{
    private:
        std::string _name;
    
    public:
        test(const std::string name);
        test(const test& copy);
        ~test();

        std::string getName() const;


};


#endif