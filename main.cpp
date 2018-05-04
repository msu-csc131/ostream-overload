/*
 * main.cpp
 *
 *  Created on: May 4, 2018
 *      Author: jdaehn
 */

#include <cstdlib>
#include <iostream>
#include "FriendlyType.h"
#include "SomeType.h"

int main(int argc, char** argv)
{
	FriendlyType friendlyTypeObject{20};
	SomeType someTypeObject{15};

	std::cout << "Hello... " << friendlyTypeObject << std::endl;
	std::cout << "Hello... " << someTypeObject << std::endl;

	return EXIT_SUCCESS;
}


