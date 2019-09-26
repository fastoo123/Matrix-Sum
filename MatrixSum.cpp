// MatrixSum.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

void sumMatrix(int matric[5][5])
{
	int i, j = 0;
	int total = 0;
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 5; i++)
		{
			total += matric[i][j];
		}
	}
	cout << total << endl;
}

int main()
{
	/*The time complexity would be O(n^2) because it takes one n for calculating the sum of a row.
	Then when calculating another dimension, the columns, would multiply another n, essentially 
	making the time complexity O(n^2).
	*/
	int matrix[5][5] = {
	{1,2,3,4,5},
	{1,2,3,4,5},
	{1,2,3,4,5},
	{1,2,3,4,5},
	{1,2,3,4,5}
	};

	cout << "The sum of your matrix is: ";

	sumMatrix(matrix);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
