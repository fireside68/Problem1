// UniqueNumbers.cpp
// UniqueNumbers class member definitions

#include <iostream>
#include <iomanip>
#include "UniqueNumbers.h"		// include UniqueNumbers class definitions
using namespace std;

// initialize integer variables
UniqueNumbers::UniqueNumbers()
{
    n = u = size = counter = 0;
}								// end UniqueNumbers constructor

void UniqueNumbers::getNumber()
{
    cout << "Enter a number greater than zero and less than 20:  ";
    cin >> n;
    while((n < 0) || (n >= 20))
    {
        cout << "Input invalid; please enter a number greater than zero and less than 20: \n";
        cin >> n;
    }
    cout << "\n\n" << endl;
}

vector<int> UniqueNumbers::fillArray(vector<int> elements(int))
{
    for(int i = 0; i < n; i++)
    {
        numbers.push_back(0);
    }

    cout << "You will now enter " << n << " random numbers between 0 and 50.\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "-$ ";
        cin >> numbers[i];
        while((numbers[i] < 0) || (numbers[i] > 50))
        {
            cout << "Please enter a number between 0 and 50: ";
            cin >> numbers[i];
        }
    }

    cout << "\n\n" << endl;
}

vector<int> UniqueNumbers::sortArray(vector<int> elements(int))
{
    int i, j;
    int temp;   // holding variable
    int numLength = numbers.size( );
    for (i=0; i< (numLength -1); i++)    // element to be compared
    {
        for(j = (i+1); j < numLength; j++)   // rest of the elements
        {
            if (numbers[i] >  numbers[j])          // ascending order
            {
                temp= numbers[i];          // swap
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

vector<int> UniqueNumbers::countMembers(vector<int> elements(int))
{
    for(int i = 0; i < numbers.size() - 1; i++)
    {
        if(numbers[i] != numbers[i+1])
        {
            counter++;
        }
    }

}

vector<int> UniqueNumbers::uniqueElements(vector<int> numbers, vector<int> elements, int u, int size)
{
    size = counter;

    for(int j = 0; j < numbers.size() - 1; j++)
    {
        if(numbers[j] != numbers[j+1])
        {
            elements[u] = numbers[j];
            u++;
        }
    }
}

void UniqueNumbers::countIndividuals(vector<int> numbers, vector<int> elements, int size, int u)
{
    for(int i = 0; i < elements.size(); i++)
    {
        cout << "Number " << elements[i] << ": ";
        for(int j = 0; j < numbers.size(); j++)
        {
            counter = u = 0;
            if(numbers[j] = elements[i])
            {
                counter++;
            }
        }
        cout << counter << " times\n";
    }
    cout << "\n" << endl;
}
