//============================================================================
// Name        : Video1_3c.cpp
// Author      : Ian Wild
// Version     :
// Copyright   :
// Description : More on templates
//============================================================================

#include "./human.h"
#include "./pair.h"
#include <iostream>

using namespace std;

int main() {
	// Instantiate two instances of class human
	CHuman person1(177.8, 72.4);
	CHuman person2(143.2, 60.8);

	// Let's compare the two humans...
	compare::CPair<CHuman> pair(person1, person2);

	// In this context the larger human is the one who is taller...
	CHuman larger = pair.GetLarger();

	cout << "Comparing the two humans, the larger person is " << larger.getHeight() << "cm tall.";

	return 0;
}
