#include "Header.h"





double Sorting::selectionSortTime(int arr[], int n)
{
	int * hold = arr;
	
	clock_t start, end;
	start = clock();
	int i, j, min_idx, temp;
	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (hold[j] < hold[min_idx])
				min_idx = j;

		// Swap the found minimum element with the first element
		temp = hold[min_idx];
		hold[min_idx] = hold[i];
		hold[i] = temp;

		

	}
	end = clock();

	double msecs = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;

	return msecs;

}

int Sorting::selectionSortSteps(int arr[], int n)
{
	int * hold = arr;
	int i, j, min_idx, temp,numofsteps=0;

	numofsteps++;
	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++)
	{
		numofsteps += 3; //i < n-1, i++, min_idx = i
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
		{
			numofsteps += 2; //j < n, j++
			if (hold[j] < hold[min_idx])
			{
				min_idx = j;
				numofsteps += 2;//min_idx = j, hold[j] < hold[min_idx]
			}
			numofsteps++;//hold[j] > hold[min_idx]
		}
		numofsteps++;
		// Swap the found minimum element with the first element
		temp = hold[min_idx];
		hold[min_idx] = hold[i];
		hold[i] = temp;
		numofsteps += 3; // line 62-64

	}
	numofsteps++; // i > n-1

	return numofsteps;
}