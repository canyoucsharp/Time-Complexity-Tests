#include "Header.h"

int Sorting:: insertion_sortSTEPS(int arr[], int length)//mit insertion sort implementation
{
	int numofsteps=0, j, k, temp;

	numofsteps++;  //j=1
	for (j = 1; j < length; j++)
	{
		numofsteps = numofsteps + 4;//j < length; j++; temp = hold[j]; k = j - 1;
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

	return numofsteps;
}

double Sorting::insertion_sortTime(int arr[], int length)//returns the amount of time it takes too run the program
{
	

	clock_t start, end;


	start = clock();
	
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
	end= clock();
	
	double msecs = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;

	return msecs;


}

