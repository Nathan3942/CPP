/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_ptr.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:23:35 by njeanbou          #+#    #+#             */
/*   Updated: 2025/06/02 19:38:18 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIQUE_PTR
#define UNIQUE_PTR

#include <iostream>
#include <string>
#include <memory>
#include <cstddef>


template <typename T>
class UniquePtr
{
    private:
        T*  ptr;

    public:
        explicit UniquePtr(T* p = nullptr);
        ~UniquePtr();

        T&  operator*() const;
        T*  operator->() const;
};

#include "unique_ptr.tpp"

#endif