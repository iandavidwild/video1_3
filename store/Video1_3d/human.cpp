//============================================================================
// Name        : Video1_3b.cpp
// Author      : Ian Wild
// Version     :
// Copyright   :
// Description : More on templates
//============================================================================

#include "human.h"

// construction
CHuman::CHuman(float h, float w) {
	this->weight = w;
	this->height = h;
}

// comparison operators
bool CHuman::operator > (CHuman other) {
	return (this->height > other.height);
}

bool CHuman::operator < (CHuman other) {
	return (this->height < other.height);
}

// get
float CHuman::getHeight() {
	return this->height;
}

float CHuman::getWeight() {
	return this->weight;
}
