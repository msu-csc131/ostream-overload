/*
 * main.cpp
 *
 *  Created on: May 4, 2018
 *      Author: jdaehn
 */

#include <cstdlib>
#include <iostream>
#include "SomeType.h"

int main(int argc, char** argv)
{
	SomeType someObject{15};

	std::cout << "Hello... " << someObject << std::endl;
	return EXIT_SUCCESS;
}


