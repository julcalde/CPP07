/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:18:13 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/05 18:57:26 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T* _elements;
		unsigned int _size;

	public:
	// Default constructor
		Array() : _elements(new T[0]), _size(0) {}
		
	// Parameterized constructor
		Array(unsigned int n) : _elements(new T[n]()), _size(n) {}
		
	// Copy constructor
		Array(const Array& other) : _elements(new T[other._size]), _size(other._size)
		{
			for (unsigned int i = 0; i < _size; i++)
				_elements[i] = other._elements[i];
		}
		
	// Copy assignment operator
		Array& operator=(const Array& other)
		{
			if (this != &other)
			{
				delete[] _elements;
				_size = other._size;
				_elements = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_elements[i] = other._elements[i];
			}
			return (*this);
		}
		
	// Destructor
		~Array()
		{
			delete[] _elements;
		}
	
	// Subscript operator for mutable arrays (read and write)
		T& operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::exception();
			return (_elements[index]);
		}
	
	// Subscript operator for const arrays (read only)
		const T& operator[](unsigned int index) const
		{
			if (index >= _size)
				throw std::exception();
			return (_elements[index]);
		}
	
	// Size function to get the number of elements
		unsigned int size() const
		{
			return (_size);
		}
	
};

#endif