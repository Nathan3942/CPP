/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_ptr.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:26:57 by njeanbou          #+#    #+#             */
/*   Updated: 2025/06/02 19:38:35 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
UniquePtr<T>::UniquePtr(T* p) : ptr(p)
{
    
}

template <typename T>
UniquePtr<T>::~UniquePtr()
{
    delete ptr;
}


template <typename T>
T&  UniquePtr<T>::operator*() const
{
    return (*ptr);
}


template <typename T>
T*  UniquePtr<T>::operator->() const
{
    return (ptr);
}