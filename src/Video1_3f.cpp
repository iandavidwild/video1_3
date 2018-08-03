//============================================================================
// Name        : Video1_3c.cpp
// Author      : Ian Wild
// Version     :
// Copyright   :
// Description : More on templates
//============================================================================

#include <iostream>
#include <exception>
#include <array>

class CZeroException: public std::exception
{
	public:
		  virtual const char* what() const throw()
		  {
			return "Dividing by zero yields an undefined result";
		  }
} ZeroException;

#define ARRAY_SIZE 0

float GetMean(std::array<int, ARRAY_SIZE> & values) {
	int set_size = values.size();

	if(set_size == 0) {
		throw ZeroException;
	}

	int sum = 0;

	for(int n=0; n < set_size; n++) {
		sum += values.at(n);
	}

	float mean = sum/set_size;

	return mean;
}

int main() {
	//std::array<int, 0> values = {4,5,6};
	std::array<int, ARRAY_SIZE> values;

	try {

		// Cause an out_of_range error
		//int out_of_range = values.at(5);

		float mean = GetMean(values);

		std::cout << "Arithmetic mean is " << mean;

	}
	catch (std::out_of_range &e) {
		std::cout << "Caught an out_of_range exception: "
				  << e.what () << '\n';
	}
	catch (CZeroException &e) {
		std::cout << "Caught a 'divide by zero' exception: "
				  << e.what () << '\n';
	}
	catch (std::exception &e) {
		std::cout << "Caught a 'divide by zero' exception: "
				  << e.what () << '\n';
	}
	catch (...) {
		std::cout << "Caught an unknown exception\n";
	}

	return 0;
}
