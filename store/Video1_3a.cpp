//============================================================================
// Name        : Video1_3a.cpp
// Author      : Ian Wild
// Version     :
// Copyright   :
// Description : Introduction to templates
//============================================================================

#include <iostream>
using namespace std;

template <class T>
T GetLarger (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

int main() {
	int a = 4;
	int b = 5;

	int larger = GetLarger<int>(a, b);

	cout << "Comparing " << a << " and " << b << ", the larger number is " << larger;

	return 0;
}
