#include "Header.h"


void Sorting::bubbleTime(int arr[], int n)
{
	clock_t start, end;
	int i, j, temp;
		
	start = clock();
		for (i = 0; i < n - 1; i++)

			// Last i elements are already in place   
			for (j = 0; j < n - i - 1; j++)
				if (arr[j] > arr[j + 1])
				{
					arr[j] = temp;
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;

				}
		end = clock();
		double msecs = ((double)(end - start)) * 1000 / CLOCKS_PER_SEC;
					

	}

void Sorting::bubbleSteps(int arr[], int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place   
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
			{
				arr[j] = temp;
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}


}


void Sorting::improved_bubbleTime(int arr[], int n)
{
	bool swapped = true;
	int j = 0;
	int tmp;
	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}
	}

}
void Sorting::improved_bubbleSteps(int arr[], int n)
{
	bool swapped = true;
	int j = 0;
	int tmp;
	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}
	}
}