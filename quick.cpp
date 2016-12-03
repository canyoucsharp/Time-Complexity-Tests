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

int Sorting::QuickPartitionTime(int A[], int p, int r)
{
	x = A[r];// pivot
	i = p - 1; // Index of smaller element

	
	for ( j =p; j <=r - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (A[j] <= x)
		{
			i++;    // increment index of smaller element
					//exchange A[i] with A[] 
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	
	
	
	//exchange A[i+1] with A[r] 
	temp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = temp;
	return (i + 1);
}

int Sorting::QuickPartitionSteps(int A[], int p, int r)

{
	x = A[r];// pivot
	i = p - 1; // Index of smaller element

	FinCount++;  //j=p;
	for (j = p; j <= r - 1; j++)
	{
		FinCount = FinCount + 2; //j <= r - 1; j++
									 // If current element is smaller than or
									 // equal to pivot
		if (A[j] >= x)
		{
			FinCount++;//A[j] <= x
		}
		FinCount++;
		if (A[j] <= x)
		{
			FinCount = FinCount + 5;//A[j] <= x i++ and swap a[i] and a[j]

			i++;    // increment index of smaller element
					//exchange A[i] with A[j] 
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;

		}
		FinCount++;
	}
	//j <=r//when j>r

	FinCount = FinCount + 4;//the swap with pivot and i+1 and return step
								//exchange A[i+1] with A[r] 
	temp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = temp;
	return (i + 1);
}












//// Driver program to test above functions
//int main()
//{
//	int max;
//	std::cout << "Please intput how big the array will be:" << std::endl;
//	std::cin >> max;
//	int *arr= new int [max];
//
//	for (int i = 0; i < max; i++)
//	{
//		arr[i] = random(max);
//	}
//
//	clock_t t1, t2;
//	t1 = clock();
//	int n = sizeof(arr) / sizeof(arr[0]);
//	quickSort(arr, 0, max - 1);
//
//
//	t2 = clock();
//	float diff((float)t2 - (float)t1);
//	//code goes here
//	printf("Sorted array: \n");
//	printArray(arr, max);
//	std::cout << diff << std::endl;
//	float seconds = diff / CLOCKS_PER_SEC;
//	std::cout << seconds << std::endl;
//	system("pause");
//
//}

