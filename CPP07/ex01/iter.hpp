/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:06:14 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/05 02:17:23 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename I, typename Func>
void    iter(I *array, size_t len, Func func)
{
    for (size_t i = 0; i < len; i++)
        func(array[i]);
}

template <typename P>
void    printElement(const P& element)
{
    std::cout << element << std::endl;
}

template <typename I>
void    incrElement(I& element)
{
    element++;
}

#endif