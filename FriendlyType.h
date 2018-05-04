/*
 * FriendlyType.h
 *
 *  Created on: May 4, 2018
 *      Author: jdaehn
 */

#ifndef FRIENDLYTYPE_H_
#define FRIENDLYTYPE_H_

#include <iostream>

class FriendlyType {
public:
	explicit FriendlyType(int data = 0);
	// NOTE: This is NOT a member function; it is a friend function
	friend std::ostream& operator<<(std::ostream&, const FriendlyType&);
	virtual ~FriendlyType() = default;
private:
	int data_;
};

/**
 * Again, we can see this is not a member function of the FriendlyType class.
 * We see this by the function header; there's no FriendlyType:: so it is a
 * "free" function. However, because it was declared a friend of FriendlyType,
 * it has direct access to anything declared in the FriendlyType class.
 */
inline std::ostream& operator<<(std::ostream& os, const FriendlyType& obj)
{
   os << obj.data_; // Notice the direct access to private data here
   return os;
}

#endif /* FRIENDLYTYPE_H_ */
