/*
 * SomeType.cpp
 *
 *  Created on: May 4, 2018
 *      Author: jdaehn
 */

#include "SomeType.h"

SomeType::SomeType(int data) : data_{data} {
	// no-op
}

void SomeType::stream_to(std::ostream& os) const {
		os << data_;
}
