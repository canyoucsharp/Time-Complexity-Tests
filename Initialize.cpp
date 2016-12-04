#include "Header.h"


void Sorting::DoSort(int * arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = i;
}

void Sorting::InitSorted()
{
	DoSort(_a100, 100);
	DoSort(_a200, 200);
	DoSort(_a300, 300);
	DoSort(_a400, 400);
	DoSort(_a500, 500);
	DoSort(_a1000, 1000);
	DoSort(_a2000, 2000);
	DoSort(_a4000, 4000);
	DoSort(_a10000, 10000);
}

void Sorting::DoReverseSort(int * arr, int n)
{
	for (int i = 0; i <n; i++)
		arr[i] = n - i;
}

void Sorting::InitReverseSorted()
{
	DoReverseSort(_a100, 100);
	DoReverseSort(_a200, 200);
	DoReverseSort(_a300, 300);
	DoReverseSort(_a400, 400);
	DoReverseSort(_a500, 500);
	DoReverseSort(_a1000, 1000);
	DoReverseSort(_a2000, 2000);
	DoReverseSort(_a4000, 4000);
	DoReverseSort(_a10000, 10000);
}

void Sorting::DoPermutation(int * arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
	randomize(arr, n);

}

void Sorting::InitPermutation()
{
	DoPermutation(_a100, 100);
	DoPermutation(_a200, 200);
	DoPermutation(_a300, 300);
	DoPermutation(_a400, 400);
	DoPermutation(_a500, 500);
	DoPermutation(_a1000, 1000);
	DoPermutation(_a2000, 2000);
	DoPermutation(_a4000, 4000);
	DoPermutation(_a10000, 10000);
}

void Sorting::DoRandom(int * arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = random(n);
}

void Sorting::InitRandom()//generates random arrays for each array
{
	DoRandom(_a100, 100);
	DoRandom(_a200, 200);
	DoRandom(_a300, 300);
	DoRandom(_a400, 400);
	DoRandom(_a500, 500);
	DoRandom(_a1000, 1000);
	DoRandom(_a2000, 2000);
	DoRandom(_a4000, 4000);
	DoRandom(_a10000, 10000);
}
