#include "Header.h"

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low  --> Starting index,
high  --> Ending index */

clock_t start, end_;
int x, i, temp, j, numofsteps=0;

void Sorting::quickSortTime(int arr[], int left, int right)
{
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/* partition */
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		quickSortTime(arr, left, j);
	if (i < right)
		quickSortTime(arr, i, right);
}

double Sorting::quickSortTimecall(int arr[], int low, int high)
{
	int * hold = arr;
	start = clock();
	quickSortTime(hold, low, high);
	end_ = clock();
	double msecs = ((double)(end_ - start)) * 1000 / CLOCKS_PER_SEC;
	return msecs;
}



void Sorting::quickSortSteps(int arr[], int left, int right)
{

	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	FinCount++;
	/* partition */
	while (i <= j)
	{
		FinCount++;
		while (arr[i] < pivot)
		{
			i++;
			FinCount++;
		}
		FinCount++;
		while (arr[j] > pivot)
		{
			j--;

			FinCount++;
		}
		FinCount++;
		if (i <= j) 
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
			FinCount += 6;
		}
		FinCount++;
	};

	/* recursion */
	if (left < j)
	{
		quickSortSteps(arr, left, j);
		FinCount += 2;
	}
	if (i < right)
	{
		quickSortSteps(arr, i, right);
		FinCount += 2;
	}
	FinCount += 2;

}
