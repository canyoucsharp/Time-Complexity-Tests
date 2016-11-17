#include "Header.h";

void Sorting:: insertion_sort(int arr[], int length)//mit insertion sort implementation
{
	int numofsteps=0;
	
    int j, k;
	int temp;

	numofsteps++;  //j=1
	for (j = 1; j < length; j++)
	{
		numofsteps = numofsteps + 4;//j < length; j++; temp = arr[j]; k = j - 1;
		temp = arr[j];
		k = j - 1;
		while (k >= 0 && arr[k] > temp)
		{
			arr[k + 1] = arr[k];
			k--;
			numofsteps = numofsteps + 4;//
		}
		numofsteps = numofsteps + 3;//
		arr[k + 1] = temp;
	}
	numofsteps++;//j < length;
}

