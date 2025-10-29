/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_ex.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:16:02 by njeanbou          #+#    #+#             */
/*   Updated: 2025/06/02 19:17:26 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_ex.hpp"


test::test(const std::string name) : _name(name)
{

}

test::test(const test& copy) : _name(copy._name)
{

}

test::~test()
{

}


std::string test::getName() const
{
    return (_name);
}