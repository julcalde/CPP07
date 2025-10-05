/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:53:51 by julcalde          #+#    #+#             */
/*   Updated: 2025/10/05 17:12:33 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void printMisc(const T& misc)
{
	std::cout << misc << std::endl;
}

template <typename T>
void incrementMisc(T& misc)
{
	misc++;
}

int main(void)
{
	std::string strArray[] = {"Hello", "I'm", "under", "water.", "Please", "help", "me"};
	std::cout << "\\---Test with string array---\\\n" << std::endl;
	iter(strArray, 7, printMisc);

	int intArray[]= {0, 9, 21, 42, 1337};
	std::cout << "\n\\---Test with int array---\\\n" << std::endl;
	std::cout << "original array:" << std::endl;
	iter(intArray, 5, printMisc);
	std::cout << "\narray after incrementing each element:" << std::endl;
	iter(intArray, 5, incrementMisc);
	iter(intArray, 5, printMisc);

	const int constIntArray[]= {0, 9, 21, 42, 1337};
	std::cout << "\n\\---Test with const int array---\\\n" << std::endl;
	iter(constIntArray, 5, printMisc);

// note: invalid inputs test should print nothing
	std::cout << "\n\\---Test invalid inputs---\\\n" << std::endl;
	iter((int*)0, 5, printMisc);
	iter(intArray, -1, printMisc);
	
	return (0);
}