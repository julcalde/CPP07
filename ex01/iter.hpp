/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:53:54 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/05 16:59:33 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T* array, const int length, void (*function)(T&))
{
	if (!array || length <= 0)
		return ;
	for (int i = 0; i < length; ++i)
		function(array[i]);
}

template <typename T>
void iter(const T* array, const int length, void (*function)(const T&))
{
	if (!array || length <= 0)
		return ;
	for (int i = 0; i < length; ++i)
		function(array[i]);
}

#endif