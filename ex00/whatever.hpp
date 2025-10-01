/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:34:02 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/01 15:39:28 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

/* Templates
	Templates are a powerful feature in C++ that allows you to write generic and reusable code.
	They enable you to create functions and classes that can operate with any data type without 
	being tied to a specific one. This is particularly useful when you want to implement 
	algorithms or data structures that work with different types of data.

	In this example, we define three template functions: swap, min, and max.
	1. swap: This function takes two references of type T and swaps their values.
	2. min: This function takes two constant references of type T and returns the smaller of the two values.
	3. max: This function takes two constant references of type T and returns the larger of the two values.
	
	By using templates, we can use these functions with any data type, such as int, float, char, or even user-defined types,
	as long as the operations used within the functions (like < and >) are defined for those types.
	To use these template functions, you simply call them with the desired data types, and the compiler generates the appropriate code.
	For example:
	int a = 5, b = 10;
	swap(a, b); // Swaps the values of a and b
	int minimum = min(a, b); // Returns the smaller value (5)
	int maximum = max(a, b); // Returns the larger value (10)
*/

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(const T& a, const T& b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T max(const T& a, const T& b)
{
	return ((a > b) ? a : b);
}

#endif