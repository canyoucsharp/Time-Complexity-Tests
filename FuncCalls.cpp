#include "Header.h"

void Sorting::InsCall(int * arr, int n,int cs)
{
	FinCount = insertion_sortSTEPS(arr, n);
	FinTime = insertion_sortTime(arr, n);
	Print(1, n, cs);
	FinCount = 0;
}

void Sorting::SelCall(int * arr, int n, int cs)
{
	FinCount = selectionSortSteps(arr, n);
	FinTime = selectionSortTime(arr, n);
	Print(2, n, cs);
	FinCount = 0;
}

void Sorting::BubCall(int * arr, int n, int cs)
{
	FinCount = bubbleSteps(arr, n);
	FinTime = bubbleTime(arr, n);
	Print(3, n, cs);
	FinCount = 0;
}

void Sorting::MergeCall(int * arr, int n, int cs)
{
	mergesort2(arr, 0, n - 1);
	FinTime = mergeSortcall(arr, 0, n - 1);
	Print(4, n, cs);
	FinCount = 0;
}

void Sorting::QuickCall(int * arr, int n, int cs)
{
	quickSortSteps(arr, 0, n - 1);
	FinTime = quickSortTimecall(arr, 0, n- 1);
	Print(5, n, cs);
	FinCount = 0;
}

void Sorting::IBubCall(int * arr, int n, int cs)
{
	FinCount = improved_bubbleSteps(arr, n);
	FinTime = improved_bubbleTime(arr, n);
	Print(6, n, cs);
}



void Sorting::CallGroup(int cs)
{
	InsCall(getArray100(), 100, cs);
	InsCall(getArray200(), 200, cs);
	InsCall(getArray300(), 300, cs);
	InsCall(getArray400(), 400, cs);
	InsCall(getArray500(), 500, cs);
	InsCall(getArray1000(), 1000, cs);
	InsCall(getArray2000(), 2000, cs);
	InsCall(getArray4000(), 4000, cs);
	InsCall(getArray10000(), 10000, cs);

	cout << "Finished insertion" << endl;

	SelCall(getArray100(), 100, cs);
	SelCall(getArray200(), 200, cs);
	SelCall(getArray300(), 300, cs);
	SelCall(getArray400(), 400, cs);
	SelCall(getArray500(), 500, cs);
	SelCall(getArray1000(), 1000, cs);
	SelCall(getArray2000(), 2000, cs);
	SelCall(getArray4000(), 4000, cs);
	SelCall(getArray10000(), 10000, cs);

	cout << "Selection sort finished";

	BubCall(getArray100(), 100, cs);
	BubCall(getArray200(), 200, cs);
	BubCall(getArray300(), 300, cs);
	BubCall(getArray400(), 400, cs);
	BubCall(getArray500(), 500, cs);
	BubCall(getArray1000(), 1000, cs);
	BubCall(getArray2000(), 2000, cs);
	BubCall(getArray4000(), 4000, cs);
	BubCall(getArray10000(), 10000, cs);

	cout << "finished bubble" << endl;

	MergeCall(getArray100(), 100, cs);
	MergeCall(getArray200(), 200, cs);
	MergeCall(getArray300(), 300, cs);
	MergeCall(getArray400(), 400, cs);
	MergeCall(getArray500(), 500, cs);
	MergeCall(getArray1000(), 1000, cs);
	MergeCall(getArray2000(), 2000, cs);
	MergeCall(getArray4000(), 4000, cs);
	MergeCall(getArray10000(), 10000, cs);

	cout << "finished merge" << endl;
	QuickCall(getArray100(), 100, cs);
	QuickCall(getArray200(), 200, cs);
	QuickCall(getArray300(), 300, cs);
	QuickCall(getArray400(), 400, cs);
	QuickCall(getArray500(), 500, cs);
	QuickCall(getArray1000(), 1000, cs);
	QuickCall(getArray2000(), 2000, cs);
	QuickCall(getArray4000(), 4000, cs);
	QuickCall(getArray10000(), 10000, cs);

	cout << "finished Quick" << endl;

	IBubCall(getArray100(), 100, cs);
	IBubCall(getArray200(), 200, cs);
	IBubCall(getArray300(), 300, cs);
	IBubCall(getArray400(), 400, cs);
	IBubCall(getArray500(), 500, cs);
	IBubCall(getArray1000(), 1000, cs);
	IBubCall(getArray2000(), 2000, cs);
	IBubCall(getArray4000(), 4000, cs);
	IBubCall(getArray10000(), 10000, cs);

	cout << "finished Bubble" << endl;
}