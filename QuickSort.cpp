#include "Header.h"

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low  --> Starting index,
high  --> Ending index */

clock_t start, end_;
int x, i, temp, j, numofsteps=0;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];    // pivot
	int i = (low - 1);  // Index of smaller element

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			i++;    // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}


void Sorting::quickSortTime(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSortTime(arr, low, pi - 1);
		quickSortTime(arr, pi + 1, high);
	}
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

int Sorting::partitionsteps(int arr[], int low, int high)
{
	int pivot = arr[high];    // pivot
	int i = (low - 1);  // Index of smaller element

	FinCount++;
	for (int j = low; j <= high - 1; j++)
	{
		FinCount += 2;
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			FinCount += 6;
			i++;    // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
		else
			FinCount++;
	}
	swap(&arr[i + 1], &arr[high]);
	FinCount += 3;
	return (i + 1);
}


void Sorting::quickSortSteps(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partitionsteps(arr, low, high);
		FinCount++;

		// Separately sort elements before
		// partition and after partition
		quickSortSteps(arr, low, pi - 1);
		FinCount++;
		quickSortSteps(arr, pi + 1, high);
		FinCount++;
	}
}



//void Sorting::quickSortTime(int arr[], int left, int right)
//{
//	int i = left, j = right;
//	int tmp;
//	int pivot = arr[(left + right) / 2];
//
//	/* partition */
//	while (i <= j) {
//		while (arr[i] < pivot)
//			i++;
//		while (arr[j] > pivot)
//			j--;
//		if (i <= j) {
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//			i++;
//			j--;
//		}
//	};
//
//	/* recursion */
//	if (left < j)
//		quickSortTime(arr, left, j);
//	if (i < right)
//		quickSortTime(arr, i, right);
//}
//


//
//void Sorting::quickSortSteps(int arr[], int left, int right)
//{
//
//	int i = left, j = right;
//	int tmp;
//	int pivot = arr[(left + right) / 2];
//
//	FinCount++;
//	/* partition */
//	while (i <= j)
//	{
//		FinCount++;
//		while (arr[i] < pivot)
//		{
//			i++;
//			FinCount++;
//		}
//		FinCount++;
//		while (arr[j] > pivot)
//		{
//			j--;
//
//			FinCount++;
//		}
//		FinCount++;
//		if (i <= j) 
//		{
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//			i++;
//			j--;
//			FinCount += 6;
//		}
//		FinCount++;
//	};
//
//	/* recursion */
//	if (left < j)
//	{
//		quickSortSteps(arr, left, j);
//		FinCount += 2;
//	}
//	if (i < right)
//	{
//		quickSortSteps(arr, i, right);
//		FinCount += 2;
//	}
//	FinCount += 2;
//
//}
