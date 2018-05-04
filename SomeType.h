/*
 * SomeType.h
 *
 *  Created on: May 4, 2018
 *      Author: jdaehn
 */

#ifndef SOMETYPE_H_
#define SOMETYPE_H_

#include <iostream>

class SomeType {
public:
	SomeType(int data = 0);
	void stream_to(std::ostream& os) const;
	virtual ~SomeType() = default;
private:
	int data_;

};

/**
 * Notice this is NOT a class method. It does, however, have an instance
 * of the above class passed in as a parameter and we call a method on
 * that instance to allow that method to have access to the private data.
 */
inline std::ostream& operator<<(std::ostream& os, const SomeType& obj) {
	obj.stream_to(os);
	return os;
}

#endif /* SOMETYPE_H_ */
