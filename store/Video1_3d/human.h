//============================================================================
// Name        : Video1_3b.cpp
// Author      : Ian Wild
// Version     :
// Copyright   :
// Description : More on templates
//============================================================================

class CHuman {
	private:
		float weight;
		float height;
	public:
		// comparison operators
		bool operator > (CHuman other);
		bool operator < (CHuman other);
		// construction
		CHuman(): weight(0), height(0) {}
		CHuman(float h, float w);
		// get
		float getHeight();
		float getWeight();
};
