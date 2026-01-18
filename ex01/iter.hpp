/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:53:54 by julcalde          #+#    #+#             */
/*   Updated: 2026/01/19 00:24:34 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

// While iterating over an array, the iter function applies the function
// passed as a parameter to each element of the array.
// This overload allows modification of the elements.
template <typename T>
void iter(T* array, const int length, void (*function)(T&))
{
	if (!array || length <= 0)
		return ;
	for (int i = 0; i < length; ++i)
		function(array[i]);
}

// While iterating over a constant array, the iter function applies the function
// passed as a parameter to each element of the array.
// This overload ensures that the function does not modify the elements.
template <typename T>
void iter(const T* array, const int length, void (*function)(const T&))
{
	if (!array || length <= 0)
		return ;
	for (int i = 0; i < length; ++i)
		function(array[i]);
}

#endif