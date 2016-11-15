#include <iostream>
#include <time.h>
#include <ctime>


using namespace std;

void InsertionSort(int i, int array[], int size);
int random();

int main()
{
	int n;

	cout << "How big should this array be?" << endl;
	cin >> n;
	int* A = new int[n];

	for (int i = 0; i< n; i++)
	{
		A[i] = random();
	}

	clock_t t1, t2;

	t1 = clock();

	InsertionSort(0, A, n);

	t2 = clock();
	float diff((float)t2 - (float)t1);

	for (int q = 0; q < n; q++)
	{
		cout << A[q] << " ";
	}

	cout << endl;
	std::cout << diff << std::endl;
	float seconds = diff / CLOCKS_PER_SEC;
	std::cout << seconds << std::endl;

	delete[] A;
	system("pause");
}

void InsertionSort(int i, int array[], int size)
{
	if (i < size)
	{
		int z;
		int temp = array[i];

		for (z = i; z > 0 && array[z - 1] > temp; z--)
			array[z] = array[z - 1];
		array[z] = temp;

		InsertionSort(i + 1, array, size);
	}
}

int random()
{
	int currentrandom;
	currentrandom = rand();

	return currentrandom;
}