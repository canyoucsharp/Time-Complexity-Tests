#include "Header.h";

void Sorting:: insertion_sort(int arr[], int length)//mit insertion sort implementation
{
	
	
    int j, k;
	int temp;

	for (j = 1; j < length; j++)
	{
		temp = arr[j];
		k = j - 1;
		while (k >= 0 && arr[k] > temp)
		{
			arr[k + 1] = arr[k];
			k--;
		}
		arr[k + 1] = temp;
	}
}