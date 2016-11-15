#include <iostream>
#include <time.h>
#include <ctime>

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int random();

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

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low  --> Starting index,
high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{

	int arr[100000];

	for (int k = 0; k< 100000; k++)
	{
		arr[k] = random();
	}

	clock_t t1, t2;
	t1 = clock();
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);


	t2 = clock();
	float diff((float)t2 - (float)t1);
	//code goes here
	printf("Sorted array: \n");
	printArray(arr, n);
	std::cout << diff << std::endl;
	float seconds = diff / CLOCKS_PER_SEC;
	std::cout << seconds << std::endl;
	system("pause");

}

int random()
{
	int currentrandom;
	currentrandom = rand();

	return currentrandom;
}
