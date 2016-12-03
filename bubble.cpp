#include "Header.h"


double Sorting::bubbleTime(int arr[], int n)
{
	clock_t start, end;
	
	int * hold = arr;
		
	start = clock();
	int i, j, temp;
		for (i = 0; i < n - 1; i++)

			// Last i elements are already in place   
			for (j = 0; j < n - i - 1; j++)
				if (hold[j] > hold[j + 1])
				{
					temp = hold[j];
					hold[j] = hold[j + 1];
					hold[j + 1] = temp;

				}
		end = clock();
		double msecs = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;
					
		return msecs;

	}

int Sorting::bubbleSteps(int arr[], int n)
{
	int * hold = arr;
	int i, j, temp, numofsteps = 0;

	numofsteps++; //initialize
	for (i = 0; i < n - 1; i++)
	{
		numofsteps+=2;//i++, i<n-1
		// Last i elements are already in place   
		for (j = 0; j < n - i - 1; j++)
		{
			numofsteps+=2;//i<n-j, i++
			if (hold[j] > hold[j + 1])
			{
				temp = hold[j];
				hold[j] = hold[j + 1];
				hold[j + 1] = temp;
				numofsteps+= 4; //hold[i]>hold[i+1], tmp = hold[i], hold[i]=hold[i+1], hold[i+1]=tmp

			}
			numofsteps++;//hold[i] < hold[i+1]
		}
		numofsteps++; //i>n-j
	}
	numofsteps++; //swapped == false
	return numofsteps;
}


double Sorting::improved_bubbleTime(int arr[], int n)
{
	clock_t start, end;
	bool swapped = true;
	int j = 0, tmp;
	int * hold = arr;

	start = clock();
	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; i++) {
			if (hold[i] > hold[i + 1]) {
				tmp = hold[i];
				hold[i] = hold[i + 1];
				hold[i + 1] = tmp;
				swapped = true;
			}
		}
	}
	end = clock();
	double msecs = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;
	return msecs;
}

int Sorting::improved_bubbleSteps(int arr[], int n)
{
	bool swapped = true;
	int j = 0, tmp, numofsteps=0;
	int * hold = arr;
	numofsteps++;//initialize

	while (swapped)
	{
		swapped = false;
		j++;
		numofsteps += 3; //(swapped), j++, swapped=false
		for (int i = 0; i < n - j; i++)
		{
			numofsteps += 2;//i<n-j, i++
			if (hold[i] > hold[i + 1])
			{
				tmp = hold[i];
				hold[i] = hold[i + 1];
				hold[i + 1] = tmp;
				swapped = true;
				numofsteps += 5; //hold[i]>hold[i+1], tmp = hold[i], hold[i]=hold[i+1], hold[i+1]=tmp, swapped=true
			}
			numofsteps++;//hold[i] < hold[i+1]
		}
		numofsteps++; //i>n-j
	}
	numofsteps++; //swapped == false
	return numofsteps;
}