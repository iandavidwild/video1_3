//============================================================================
// Name        : Video1_3c.cpp
// Author      : Ian Wild
// Version     :
// Copyright   :
// Description : More on templates
//============================================================================

#include "./human.h";

#include <iostream>
using namespace std;

template <class T>
class CPair {
    T a, b;
  public:
    CPair (T first, T second)
      {a=first; b=second;}
    T GetLarger () {
      T result;
      result = (a>b)? a : b;
      return (result);
    }
    T GetSmaller () {
	  T result;
	  result = (a<b)? a : b;
	  return (result);
    }
};

int main() {
	// Instantiate two instances of class human
	CHuman person1(177.8, 72.4);
	CHuman person2(143.2, 60.8);

	CPair<CHuman> pair(person1, person2);

	// In this context the larger human is the one who is taller...
	CHuman larger = pair.GetLarger();

	cout << "Comparing the two humans, the larger person is " << larger.getHeight() << "cm tall.";

	return 0;
}
