#include "Header.h"


// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void Sorting::merge(int arr[], int l, int m, int r)//steps
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int *L=new int[n1], *R=new int[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
		       are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
		       are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void Sorting::mergeSort(int arr[], int l, int r)//steps
{
	if (l < r)
	{
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}



double Sorting::mergeSortcall(int arr[], int l, int r)
{
	int * hold = arr;
	clock_t start, end;

	start = clock();
	mergeSort( hold, l, r);
	
	end = clock();
	
	double msecs = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;
	return msecs;

}
void Sorting::merge1(int arr[], int l, int m, int r)//steps
{
	int i, j, k, n1 = m - l + 1, n2 = r - m;

	/* create temp arrays */
	int *L = new int[n1], *R = new int[n2];
	
	FinCount++;

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
		FinCount += 2;
	}
	FinCount++;
	for (j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
		FinCount += 2;
	}
	FinCount++;

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray'
	FinCount += 3;
	while (i < n1 && j < n2)
	{
		FinCount += 2;
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
			FinCount += 2;
		}
		else
		{
			arr[k] = R[j];
			j++;
			FinCount += 2;
		}
		k++;
		FinCount += 3;
	}

	/* Copy the remaining elements of L[], if there
	       are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
		FinCount += 4;
	}

	/* Copy the remaining elements of R[], if there
	       are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
		FinCount += 4;
	}
	FinCount++;
}

void Sorting::mergesort2(int arr[], int l, int r)//steps
{
	if (l < r)
	{
		FinCount++;
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;
		FinCount++;
		// Sort first and second halves
		mergesort2(arr, l, m);
		FinCount++;
		mergesort2(arr, m + 1, r);
		FinCount++;
		merge1(arr, l, m, r);
		FinCount++;
	}
	FinCount++;
}