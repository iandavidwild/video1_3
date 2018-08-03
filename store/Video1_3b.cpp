//============================================================================
// Name        : Video1_3b.cpp
// Author      : Ian Wild
// Version     :
// Copyright   :
// Description : More on templates
//============================================================================

#include <iostream>
using namespace std;

class CHuman {
	private:
		float weight;
		float height;
	public:
		// comparison operators
		bool operator > (CHuman other) {
			return (this->height > other.height);
		}
		bool operator < (CHuman other) {
			return (this->height < other.height);
		}
		// construction
		CHuman(): weight(0), height(0) {}
		CHuman(float h, float w) {
			this->weight = w;
			this->height = h;
		}
		// get
		float getHeight() {
			return this->height;
		}
		float getWeight() {
			return this->weight;
		}
};

template <class T>
T GetLarger (T a, T b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

int main() {
	// Instantiate two instances of class human
	CHuman person1(177.8, 72.4);
	CHuman person2(143.2, 60.8);

	// In this context the larger human is the one who is taller...
	CHuman larger = GetLarger<CHuman>(person1, person2);

	cout << "Comparing the two humans, the larger person is " << larger.getHeight() << "cm tall.";

	return 0;
}
