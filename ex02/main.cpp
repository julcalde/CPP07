/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:17:49 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/05 19:04:32 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main(void)
{
	// Test: empty default constructor
	Array<int> emptyEggsCartoon;
	if (emptyEggsCartoon.size() == 0)
		std::cout << "Eggs-Cartoon size: no eggs. You expired." << std::endl;
	else
		std::cout << "Eggs-Cartoon size: " << emptyEggsCartoon.size() << std::endl;
	
	// Test: parameterized constructor
	Array<int> intArray(5);
	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i * 42;
	std::cout << "\nInt array: ";
	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << intArray[i] << " ";
	std::cout << std::endl;
	
	// Test: copy constructor
	Array<int>copyArray(intArray);
	copyArray[0] = 100; // change copy
	std::cout << "\nOriginal array (after modification): ";
	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << intArray[i] << " ";
	std::cout << "\nCopy (for comparison): ";
	for (unsigned int i = 0; i < copyArray.size(); i++)
		std::cout << copyArray[i] << " ";
	std::cout << std::endl;
	
	// Test: assignment operator
	Array<int> assignedArray;
	assignedArray = intArray;
	assignedArray[1] = 200; // change assigned
	std::cout << "\nOriginal array (after modification): ";
	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << intArray[i] << " ";
	std::cout << "\nAssigned (for comparison): ";
	for (unsigned int i = 0; i < assignedArray.size(); i++)
		std::cout << assignedArray[i] << " ";
	
	// Test: string array
	Array<std::string> stringArray(4);
	stringArray[0] = "Hello";
	stringArray[1] = "42";
	stringArray[2] = "Heilbronn";
	stringArray[3] = "!";
	std::cout << "\n\nString array: ";
	for (unsigned int i = 0; i < stringArray.size(); i++)
		std::cout << stringArray[i] << " ";
	std::cout << std::endl;
	
	// Test: out of bounds access
	try
	{
		intArray[10] = 1337;
	}
	catch (const std::exception& e)
	{
		std::cout << "\nException caught: (index out of bounds)" << std::endl;
	}
	
	// Test: read-only array
	const Array<int>constArray(intArray);
	std::cout << "\nConst array: ";
	for (unsigned int i = 0; i < constArray.size(); i++)
		std::cout << constArray[i] << " ";
	std::cout << std::endl;
	
	return (0);
}