/*
	Shell to get sort started
*/

#include<algorithm>
#include<ctime>
#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

// Prototypes for utilities
void generateIntArray(int *intArray, int numOfElements);

// Prototypes for sort algorithms

// main function
void main(int argc, char** argv)
{
	// input message
	cout << "Please enter the number of elements you want to inserted into an array: " << endl;
	int numOfElements = 0;
	cin >> numOfElements;
	// initialized values
	clock_t begin = 0;
	clock_t end = 0;
	double timeElapsed = 0.0;

	int *sortArray = new int[numOfElements];

	// stl sort (merge sort and quick sort)
	generateIntArray(sortArray, numOfElements);
	//for (int ii = 0; ii < numOfElements; ++ii)
	//{
	//	cout << ii << " " << sortArray[ii] << endl;
	//}
	begin = clock();
	sort(sortArray, sortArray + numOfElements);
	end = clock();
	timeElapsed = double(end - begin) / CLOCKS_PER_SEC;
	cout << "TimeElapsed for sort(): " << timeElapsed << endl;
	//for (int ii = 0; ii < numOfElements; ++ii)
	//{
	//	cout << ii << " " << sortArray[ii] << endl;
	//}
	//delete[] intArray;

	int *heapArray = new int[numOfElements];
	generateIntArray(heapArray, numOfElements);
	//for (int ii = 0; ii < numOfElements; ++ii)
	//{
	//	cout << ii << " " << heapArray[ii] << endl;
	//}
	begin = clock();
	make_heap(heapArray, heapArray + numOfElements);
	sort_heap(heapArray, heapArray + numOfElements);
	end = clock();
	timeElapsed = double(end - begin) / CLOCKS_PER_SEC;
	cout << "TimeElapsed for sort_heap(): " << timeElapsed << endl;
	//for (int ii = 0; ii < numOfElements; ++ii)
	//{
	//	cout << ii << " " << heapArray[ii] << endl;
	//}

	// Generate your own sorts below 

	// Stop
	cout << "You have reached the end of the program. Press any key..." << endl;
	cin.get();
	cin.get();

}

// Functions

// void generateIntArray(int *intArray, int numOfElements);
// 
// generates an rand array of length numOfElements
void generateIntArray(int *intArray, int numOfElements)
{
	int randSeedVal = 0;
	srand(randSeedVal);

	for (int ii = 0; ii < numOfElements; ++ii)
	{
		intArray[ii] = rand();
	}


}