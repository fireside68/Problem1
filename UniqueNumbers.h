// Problem #1 Unique Numbers
// UniqueNumbers Class Definition
// Member functions defined UniqueNumbers.cpp

// Prevent multiple inclusions of header file
#ifndef UNIQUENUMBERS_H
#define UNIQUENUMBERS_H
#include <vector>

// UniqueNumbers class definition

class UniqueNumbers
{

public:
	UniqueNumbers(); 			// constructor
	void getNumber();			// get number n of user elements
	std::vector<int> fillArray(std::vector<int> numbers(int), int n);			// get user to fill array with n elements
    std::vector<int> sortArray(std::vector<int> numbers(int));			// sort array from smallest to largest
	std::vector<int> countMembers(std::vector<int> numbers(int));		// count number of unique elements
	std::vector<int> uniqueElements(std::vector<int> numbers(int), std::vector<int> elements(int), int u, int size);     // extract unique elements
	void countIndividuals();	// count number of each unique element

private:
    int n;						// user entered number of elements
	int u;						// number of unique elements
	int size;					// number of unique elements, continued
	int counter;				// generic counter
	std::vector<int> numbers(int);				// array for user input elements
	std::vector<int> elements(int);			// array for unique elements based on 'size'

};

#endif
