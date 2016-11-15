#include <iostream>
#include <time.h>
#include <ctime>


using namespace std;


void insertion_sort(int arr[], int length);
int random(int n);

int main()
{
	int n;

	cout << "How big should this array be?" << endl;
	cin >> n;
	int* A = new int[n];

	for (int i = 0; i< n; i++)
	{
		A[i] = random(n);
	}

	clock_t t1, t2;

	t1 = clock();

	insertion_sort(A, n);

	t2 = clock();
	float diff((float)t2 - (float)t1);
	float seconds = diff / CLOCKS_PER_SEC;

	for (int q = 0; q < n; q++)
	{
		cout << A[q] << " ";
	}

	cout << endl;
	std::cout << diff << std::endl;
	std::cout << seconds << std::endl;

	delete[] A;
	system("pause");
}

void insertion_sort(int arr[], int length) {
	int j, temp;

	for (int i = 0; i < length; i++) {
		j = i;

		while (j > 0 && arr[j] < arr[j - 1]) {
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}

int random(int n)
{
	int currentrandom;
	currentrandom = rand() % n;

	return currentrandom;
}