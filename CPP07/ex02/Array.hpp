/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:20:54 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/05 02:53:56 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array
{
    private:
        T*	_array;
        unsigned int	_size;

	public:
		Array() : _array(NULL), _size(0) {}
		Array(const unsigned int n) : _size(n)
		{
			_array = new T[n]();
		}
		Array(const Array& copy) : _size(copy._size)
		{
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = copy._array[i];
		}
		~Array()
		{
			delete[] _array;
		}

		Array&	operator=(const Array& equal)
		{
			if (this != &equal)
			{
				delete[] _array;
				_size = equal._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = equal._array[i];
			}
			return (*this);
		}
		T&	operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::out_of_range("Index out of range!");
			return (_array[index]);
		}

		unsigned int size() const
		{
			return (_size);
		}
};

#endif