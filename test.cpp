#include "Header.h"


void Sorting::display(int arr[],int size,ofstream &myfile)
{
	
	
	
	
	for (int i = 0; i < size; i++)
	{
		myfile << arr[i] << " ";
		if (i % 10 == 0 && i != 0)
		{
			myfile<< endl;
		}

	}
	myfile << endl;
	myfile << "********************************************************" << endl;

}
	




void Sorting::test()
{

	/*
	Sort Identifiers :
	Insertion Sort = 1
	Selection Sort =2
	Bubble Sort =3
	Merge Sort =4
	Quick Sort =5
	Improved bubble = 6
	*/


	//case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1case 1
	int cs = 1;
	case1();

	//Insertion Sort Case 1
	FinCount=insertion_sortSTEPS(a100,100);
	FinTime=insertion_sortTime(a100, 100);
	Print(1, 100, cs);
	FinCount = insertion_sortSTEPS(a200, 200);
	FinTime = insertion_sortTime(a200, 200);
	Print(1, 200, cs);
	FinCount = insertion_sortSTEPS(a300,300);
	FinTime = insertion_sortTime(a300, 300);
	Print(1, 300, cs);
	FinCount = insertion_sortSTEPS(a400,400);
	FinTime = insertion_sortTime(a400, 400);
	Print(1, 400, cs);
	FinCount = insertion_sortSTEPS(a500, 500);
	FinTime = insertion_sortTime(a500, 500);
	Print(1, 500, cs);
	FinCount = insertion_sortSTEPS(a1000, 1000);
	FinTime = insertion_sortTime(a1000, 1000);
	Print(1, 1000, cs);
	FinCount = insertion_sortSTEPS(a2000, 2000);
	FinTime = insertion_sortTime(a2000, 2000);
	Print(1, 2000, cs);
	FinCount = insertion_sortSTEPS(a4000, 4000);
	FinTime = insertion_sortTime(a4000, 4000);
	Print(1, 4000, cs);
	FinCount = insertion_sortSTEPS(a10000, 10000);
	FinTime = insertion_sortTime(a10000, 10000);
	Print(1, 10000, cs);

	//Selection Sort Case 1
	FinCount = selectionSortSteps(a100, 100);
	FinTime = selectionSortTime(a100, 100);
	Print(2, 100, cs);
	FinCount = selectionSortSteps(a200, 200);
	FinTime = selectionSortTime(a200, 200);
	Print(2, 200, cs);
	FinCount = selectionSortSteps(a300, 300);
	FinTime = selectionSortTime(a300, 300);
	Print(2, 300, cs);
	FinCount = selectionSortSteps(a400, 400);
	FinTime = selectionSortTime(a400, 400);
	Print(2, 400, cs);
	FinCount = selectionSortSteps(a500, 500);
	FinTime = selectionSortTime(a500, 500);
	Print(2, 500, cs);
	FinCount = selectionSortSteps(a1000, 1000);
	FinTime = selectionSortTime(a1000, 1000);
	Print(2, 1000, cs);
	FinCount = selectionSortSteps(a2000, 2000);
	FinTime = selectionSortTime(a2000, 2000);
	Print(2, 2000, cs);
	FinCount = selectionSortSteps(a4000, 4000);
	FinTime = selectionSortTime(a4000, 4000);
	Print(2, 4000, cs);
	FinCount = selectionSortSteps(a10000, 10000);
	FinTime = selectionSortTime(a10000, 10000);
	Print(2, 10000, cs);

	//Bubble Sort Case 1
	FinCount = bubbleSteps(a100, 100);
	FinTime = bubbleTime(a100, 100);
	Print(3, 100, cs);
	FinCount = bubbleSteps(a200, 200);
	FinTime = bubbleTime(a200, 200);
	Print(3, 200, cs);
	FinCount = bubbleSteps(a300, 300);
	FinTime = bubbleTime(a300, 300);
	Print(3, 300, cs);
	FinCount = bubbleSteps(a400, 400);
	FinTime = bubbleTime(a400, 400);
	Print(3, 400, cs);
	FinCount = bubbleSteps(a500, 500);
	FinTime = bubbleTime(a500, 500);
	Print(3, 500, cs);
	FinCount = bubbleSteps(a1000, 1000);
	FinTime = bubbleTime(a1000, 1000);
	Print(3, 1000, cs);
	FinCount = bubbleSteps(a2000, 2000);
	FinTime = bubbleTime(a2000, 2000);
	Print(3, 2000, cs);
	FinCount = bubbleSteps(a4000, 4000);
	FinTime = bubbleTime(a4000, 4000);
	Print(3, 4000, cs);
	FinCount = bubbleSteps(a10000, 10000);
	FinTime = bubbleTime(a10000, 10000);
	Print(3, 10000, cs);

	FinCount = 0;

	//Merge Sort Case 1
	mergesort2(a100, 0, 100 - 1);
	FinTime= mergeSortcall(a100,0, 100-1);
	Print(4, 100, cs);
	FinCount = 0;
	mergesort2(a200, 0, 200 - 1);
	FinTime = mergeSortcall(a200, 0, 200 - 1);
	Print(4, 200, cs);
	FinCount = 0;
	mergesort2(a300, 0, 300 - 1);
	FinTime = mergeSortcall(a300, 0, 300 - 1);
	Print(4, 300, cs);
	FinCount = 0;
	mergesort2(a400, 0, 400 - 1);
	FinTime = mergeSortcall(a400, 0, 400 - 1);
	Print(4, 400, cs);
	FinCount = 0;
	mergesort2(a500, 0, 500 - 1);
	FinTime = mergeSortcall(a500, 0, 500 - 1);
	Print(4, 500, cs);
	FinCount = 0;
	mergesort2(a1000, 0, 1000 - 1);
	FinTime = mergeSortcall(a1000, 0, 1000 - 1);
	Print(4, 1000, cs);
	FinCount = 0;
	mergesort2(a2000, 0, 2000 - 1);
	FinTime = mergeSortcall(a2000, 0, 2000 - 1);
	Print(4, 2000, cs);
	FinCount = 0;
	mergesort2(a4000, 0, 4000 - 1);
	FinTime = mergeSortcall(a4000, 0, 4000 - 1);
	Print(4, 4000, cs);
	FinCount = 0;
	mergesort2(a10000, 0, 10000 - 1);
	FinTime = mergeSortcall(a10000, 0, 10000 - 1);
	Print(4, 10000, cs);
	FinCount = 0;
	
	//Quick Sort Case 1
	/*
	quickSortSteps(a100, 0, 100 - 1);
	FinTime = quickSortTimecall(a100, 0, 100 - 1);
	Print(5, 100, cs);
	FinCount = 0;
	quickSortSteps(a200, 0, 200 - 1);
	FinTime = quickSortTimecall(a200, 0, 200 - 1);
	Print(5, 200, cs);
	FinCount = 0;
	quickSortSteps(a300, 0, 300 - 1);
	FinTime = quickSortTimecall(a300, 0, 300 - 1);
	Print(5, 300, cs);
	FinCount = 0;
	quickSortSteps(a400, 0, 400 - 1);
	FinTime = quickSortTimecall(a400, 0, 400 - 1);
	Print(5, 400, cs);
	FinCount = 0;
	quickSortSteps(a500, 0, 500 - 1);
	FinTime = quickSortTimecall(a500, 0, 500 - 1);
	Print(5, 500, cs);
	FinCount = 0;
	quickSortSteps(a1000, 0, 1000 - 1);
	FinTime = quickSortTimecall(a1000, 0, 1000 - 1);
	Print(5, 1000, cs);
	FinCount = 0;
	quickSortSteps(a2000, 0, 2000 - 1);
	FinTime = quickSortTimecall(a2000, 0, 2000 - 1);
	Print(5, 2000, cs);
	FinCount = 0;
	quickSortSteps(a4000, 0, 4000 - 1);
	FinTime = quickSortTimecall(a4000, 0, 4000 - 1);
	Print(5, 4000, cs);
	FinCount = 0;

	quickSortSteps(a10000, 0, 10000 - 1);
	FinTime = quickSortTimecall(a10000, 0, 10000 - 1);
	Print(5, 10000, cs);
	FinCount = 0;
	*/
	

	//Bubble Sort Improved Case 1

	FinCount = improved_bubbleSteps(a100, 100);
	FinTime = improved_bubbleTime(a100, 100);
	Print(6, 100, cs);
	FinCount = improved_bubbleSteps(a200, 200);
	FinTime = improved_bubbleTime(a200, 200);
	Print(6, 200, cs);
	FinCount = improved_bubbleSteps(a300, 300);
	FinTime = improved_bubbleTime(a300, 300);
	Print(6, 300, cs);
	FinCount = improved_bubbleSteps(a400, 400);
	FinTime = improved_bubbleTime(a400, 400);
	Print(6, 400, cs);
	FinCount = improved_bubbleSteps(a500, 500);
	FinTime = improved_bubbleTime(a500, 500);
	Print(6, 500, cs);
	FinCount = improved_bubbleSteps(a1000, 1000);
	FinTime = improved_bubbleTime(a1000, 1000);
	Print(6, 1000, cs);
	FinCount = improved_bubbleSteps(a2000, 2000);
	FinTime = improved_bubbleTime(a2000, 2000);
	Print(6, 2000, cs);
	FinCount = improved_bubbleSteps(a4000, 4000);
	FinTime = improved_bubbleTime(a4000, 4000);
	Print(6, 4000, cs);
	FinCount = improved_bubbleSteps(a10000, 10000);
	FinTime = improved_bubbleTime(a10000, 10000);
	Print(6, 10000, cs);

	//case 2 case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2case 2s
	cs = 2;
	case2();
	FinCount = 0;
	//Insertion Sort Case 2
	FinCount = insertion_sortSTEPS(a100, 100);
	FinTime = insertion_sortTime(a100, 100);
	Print(1, 100, cs);
	FinCount = insertion_sortSTEPS(a200, 200);
	FinTime = insertion_sortTime(a200, 200);
	Print(1, 200, cs);
	FinCount = insertion_sortSTEPS(a300, 300);
	FinTime = insertion_sortTime(a300, 300);
	Print(1, 300, cs);
	FinCount = insertion_sortSTEPS(a400, 400);
	FinTime = insertion_sortTime(a400, 400);
	Print(1, 400, cs);
	FinCount = insertion_sortSTEPS(a500, 500);
	FinTime = insertion_sortTime(a500, 500);
	Print(1, 500, cs);
	FinCount = insertion_sortSTEPS(a1000, 1000);
	FinTime = insertion_sortTime(a1000, 1000);
	Print(1, 1000, cs);
	FinCount = insertion_sortSTEPS(a2000, 2000);
	FinTime = insertion_sortTime(a2000, 2000);
	Print(1, 2000, cs);
	FinCount = insertion_sortSTEPS(a4000, 4000);
	FinTime = insertion_sortTime(a4000, 4000);
	Print(1, 4000, cs);
	FinCount = insertion_sortSTEPS(a10000, 10000);
	FinTime = insertion_sortTime(a10000, 10000);
	Print(1, 10000, cs);

	FinCount = 0;
	//Selection Sort Case 2
	FinCount = selectionSortSteps(a100, 100);
	FinTime = selectionSortTime(a100, 100);
	Print(2, 100, cs);
	FinCount = selectionSortSteps(a200, 200);
	FinTime = selectionSortTime(a200, 200);
	Print(2, 200, cs);
	FinCount = selectionSortSteps(a300, 300);
	FinTime = selectionSortTime(a300, 300);
	Print(2, 300, cs);
	FinCount = selectionSortSteps(a400, 400);
	FinTime = selectionSortTime(a400, 400);
	Print(2, 400, cs);
	FinCount = selectionSortSteps(a500, 500);
	FinTime = selectionSortTime(a500, 500);
	Print(2, 500, cs);
	FinCount = selectionSortSteps(a1000, 1000);
	FinTime = selectionSortTime(a1000, 1000);
	Print(2, 1000, cs);
	FinCount = selectionSortSteps(a2000, 2000);
	FinTime = selectionSortTime(a2000, 2000);
	Print(2, 2000, cs);
	FinCount = selectionSortSteps(a4000, 4000);
	FinTime = selectionSortTime(a4000, 4000);
	Print(2, 4000, cs);
	FinCount = selectionSortSteps(a10000, 10000);
	FinTime = selectionSortTime(a10000, 10000);
	Print(2, 10000, cs);

	FinCount = 0;
	//Bubble Sort Case 2
	FinCount = bubbleSteps(a100, 100);
	FinTime = bubbleTime(a100, 100);
	Print(3, 100, cs);
	FinCount = bubbleSteps(a200, 200);
	FinTime = bubbleTime(a200, 200);
	Print(3, 200, cs);
	FinCount = bubbleSteps(a300, 300);
	FinTime = bubbleTime(a300, 300);
	Print(3, 300, cs);
	FinCount = bubbleSteps(a400, 400);
	FinTime = bubbleTime(a400, 400);
	Print(3, 400, cs);
	FinCount = bubbleSteps(a500, 500);
	FinTime = bubbleTime(a500, 500);
	Print(3, 500, cs);
	FinCount = bubbleSteps(a1000, 1000);
	FinTime = bubbleTime(a1000, 1000);
	Print(3, 1000, cs);
	FinCount = bubbleSteps(a2000, 2000);
	FinTime = bubbleTime(a2000, 2000);
	Print(3, 2000, cs);
	FinCount = bubbleSteps(a4000, 4000);
	FinTime = bubbleTime(a4000, 4000);
	Print(3, 4000, cs);
	FinCount = bubbleSteps(a10000, 10000);
	FinTime = bubbleTime(a10000, 10000);
	Print(3, 10000, cs);
	FinCount = 0;

	//Merge Sort Case 2
	mergesort2(a100, 0, 100 - 1);
	FinTime = mergeSortcall(a100, 0, 100 - 1);
	Print(4, 100, cs);
	FinCount = 0;
	mergesort2(a200, 0, 200 - 1);
	FinTime = mergeSortcall(a200, 0, 200 - 1);
	Print(4, 200, cs);
	FinCount = 0;
	mergesort2(a300, 0, 300 - 1);
	FinTime = mergeSortcall(a300, 0, 300 - 1);
	Print(4, 300, cs);
	FinCount = 0;
	mergesort2(a400, 0, 400 - 1);
	FinTime = mergeSortcall(a400, 0, 400 - 1);
	Print(4, 400, cs);
	FinCount = 0;
	mergesort2(a500, 0, 500 - 1);
	FinTime = mergeSortcall(a500, 0, 500 - 1);
	Print(4, 500, cs);
	FinCount = 0;
	mergesort2(a1000, 0, 1000 - 1);
	FinTime = mergeSortcall(a1000, 0, 1000 - 1);
	Print(4, 1000, cs);
	FinCount = 0;
	mergesort2(a2000, 0, 2000 - 1);
	FinTime = mergeSortcall(a2000, 0, 2000 - 1);
	Print(4, 2000, cs);
	FinCount = 0;
	mergesort2(a4000, 0, 4000 - 1);
	FinTime = mergeSortcall(a4000, 0, 4000 - 1);
	Print(4, 4000, cs);
	FinCount = 0;
	mergesort2(a10000, 0, 10000 - 1);
	FinTime = mergeSortcall(a10000, 0, 10000 - 1);
	Print(4, 10000, cs);
	FinCount = 0;

	/*
	//Quick Sort Case 2
	quickSortSteps(a100, 0, 100 - 1);
	FinTime = quickSortTimecall(a100, 0, 100 - 1);
	Print(5, 100, cs);
	FinCount = 0;
	quickSortSteps(a200, 0, 200 - 1);
	FinTime = quickSortTimecall(a200, 0, 200 - 1);
	Print(5, 200, cs);
	FinCount = 0;
	quickSortSteps(a300, 0, 300 - 1);
	FinTime = quickSortTimecall(a300, 0, 300 - 1);
	Print(5, 300, cs);
	FinCount = 0;
	quickSortSteps(a400, 0, 400 - 1);
	FinTime = quickSortTimecall(a400, 0, 400 - 1);
	Print(5, 400, cs);
	FinCount = 0;
	quickSortSteps(a500, 0, 500 - 1);
	FinTime = quickSortTimecall(a500, 0, 500 - 1);
	Print(5, 500, cs);
	FinCount = 0;
	quickSortSteps(a1000, 0, 1000 - 1);
	FinTime = quickSortTimecall(a1000, 0, 1000 - 1);
	Print(5, 1000, cs);
	FinCount = 0;
	quickSortSteps(a2000, 0, 2000 - 1);
	FinTime = quickSortTimecall(a2000, 0, 2000 - 1);
	Print(5, 2000, cs);
	FinCount = 0;
	quickSortSteps(a4000, 0, 4000 - 1);
	FinTime = quickSortTimecall(a4000, 0, 4000 - 1);
	Print(5, 4000, cs);
	FinCount = 0;
	quickSortSteps(a10000, 0, 10000 - 1);
	FinTime = quickSortTimecall(a10000, 0, 10000 - 1);
	Print(5, 10000, cs);
	FinCount = 0;

	*/

	//Bubble Sort Improved Case 2
	FinCount = improved_bubbleSteps(a100, 100);
	FinTime = improved_bubbleTime(a100, 100);
	Print(6, 100, cs);
	FinCount = improved_bubbleSteps(a200, 200);
	FinTime = improved_bubbleTime(a200, 200);
	Print(6, 200, cs);
	FinCount = improved_bubbleSteps(a300, 300);
	FinTime = improved_bubbleTime(a300, 300);
	Print(6, 300, cs);
	FinCount = improved_bubbleSteps(a400, 400);
	FinTime = improved_bubbleTime(a400, 400);
	Print(6, 400, cs);
	FinCount = improved_bubbleSteps(a500, 500);
	FinTime = improved_bubbleTime(a500, 500);
	Print(6, 500, cs);
	FinCount = improved_bubbleSteps(a1000, 1000);
	FinTime = improved_bubbleTime(a1000, 1000);
	Print(6, 1000, cs);
	FinCount = improved_bubbleSteps(a2000, 2000);
	FinTime = improved_bubbleTime(a2000, 2000);
	Print(6, 2000, cs);
	FinCount = improved_bubbleSteps(a4000, 4000);
	FinTime = improved_bubbleTime(a4000, 4000);
	Print(6, 4000, cs);
	FinCount = improved_bubbleSteps(a10000, 10000);
	FinTime = improved_bubbleTime(a10000, 10000);
	Print(6, 10000, cs);

	FinCount = 0;


	//case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3case 3
	cs = 3;
	case3();
	
	//Insertion Sort Case 3
	FinCount = insertion_sortSTEPS(a100, 100);
	FinTime = insertion_sortTime(a100, 100);
	Print(1, 100, cs);
	FinCount = insertion_sortSTEPS(a200, 200);
	FinTime = insertion_sortTime(a200, 200);
	Print(1, 200, cs);
	FinCount = insertion_sortSTEPS(a300, 300);
	FinTime = insertion_sortTime(a300, 300);
	Print(1, 300, cs);
	FinCount = insertion_sortSTEPS(a400, 400);
	FinTime = insertion_sortTime(a400, 400);
	Print(1, 400, cs);
	FinCount = insertion_sortSTEPS(a500, 500);
	FinTime = insertion_sortTime(a500, 500);
	Print(1, 500, cs);
	FinCount = insertion_sortSTEPS(a1000, 1000);
	FinTime = insertion_sortTime(a1000, 1000);
	Print(1, 1000, cs);
	FinCount = insertion_sortSTEPS(a2000, 2000);
	FinTime = insertion_sortTime(a2000, 2000);
	Print(1, 2000, cs);
	FinCount = insertion_sortSTEPS(a4000, 4000);
	FinTime = insertion_sortTime(a4000, 4000);
	Print(1, 4000, cs);
	FinCount = insertion_sortSTEPS(a10000, 10000);
	FinTime = insertion_sortTime(a10000, 10000);
	Print(1, 10000, cs);

	FinCount = 0;
	//Selection Sort Case 3
	FinCount = selectionSortSteps(a100, 100);
	FinTime = selectionSortTime(a100, 100);
	Print(2, 100, cs);
	FinCount = selectionSortSteps(a200, 200);
	FinTime = selectionSortTime(a200, 200);
	Print(2, 200, cs);
	FinCount = selectionSortSteps(a300, 300);
	FinTime = selectionSortTime(a300, 300);
	Print(2, 300, cs);
	FinCount = selectionSortSteps(a400, 400);
	FinTime = selectionSortTime(a400, 400);
	Print(2, 400, cs);
	FinCount = selectionSortSteps(a500, 500);
	FinTime = selectionSortTime(a500, 500);
	Print(2, 500, cs);
	FinCount = selectionSortSteps(a1000, 1000);
	FinTime = selectionSortTime(a1000, 1000);
	Print(2, 1000, cs);
	FinCount = selectionSortSteps(a2000, 2000);
	FinTime = selectionSortTime(a2000, 2000);
	Print(2, 2000, cs);
	FinCount = selectionSortSteps(a4000, 4000);
	FinTime = selectionSortTime(a4000, 4000);
	Print(2, 4000, cs);
	FinCount = selectionSortSteps(a10000, 10000);
	FinTime = selectionSortTime(a10000, 10000);
	Print(2, 10000, cs);

	FinCount = 0;
	//Bubble Sort Case 3
	FinCount = bubbleSteps(a100, 100);
	FinTime = bubbleTime(a100, 100);
	Print(3, 100, cs);
	FinCount = bubbleSteps(a200, 200);
	FinTime = bubbleTime(a200, 200);
	Print(3, 200, cs);
	FinCount = bubbleSteps(a300, 300);
	FinTime = bubbleTime(a300, 300);
	Print(3, 300, cs);
	FinCount = bubbleSteps(a400, 400);
	FinTime = bubbleTime(a400, 400);
	Print(3, 400, cs);
	FinCount = bubbleSteps(a500, 500);
	FinTime = bubbleTime(a500, 500);
	Print(3, 500, cs);
	FinCount = bubbleSteps(a1000, 1000);
	FinTime = bubbleTime(a1000, 1000);
	Print(3, 1000, cs);
	FinCount = bubbleSteps(a2000, 2000);
	FinTime = bubbleTime(a2000, 2000);
	Print(3, 2000, cs);
	FinCount = bubbleSteps(a4000, 4000);
	FinTime = bubbleTime(a4000, 4000);
	Print(3, 4000, cs);
	FinCount = bubbleSteps(a10000, 10000);
	FinTime = bubbleTime(a10000, 10000);
	Print(3, 10000, cs);

	FinCount = 0;
	//Merge Sort Case 3
	mergesort2(a100, 0, 100 - 1);
	FinTime = mergeSortcall(a100, 0, 100 - 1);
	Print(4, 100, cs);
	FinCount = 0;
	mergesort2(a200, 0, 200 - 1);
	FinTime = mergeSortcall(a200, 0, 200 - 1);
	Print(4, 200, cs);
	FinCount = 0;
	mergesort2(a300, 0, 300 - 1);
	FinTime = mergeSortcall(a300, 0, 300 - 1);
	Print(4, 300, cs);
	FinCount = 0;
	mergesort2(a400, 0, 400 - 1);
	FinTime = mergeSortcall(a400, 0, 400 - 1);
	Print(4, 400, cs);
	FinCount = 0;
	mergesort2(a500, 0, 500 - 1);
	FinTime = mergeSortcall(a500, 0, 500 - 1);
	Print(4, 500, cs);
	FinCount = 0;
	mergesort2(a1000, 0, 1000 - 1);
	FinTime = mergeSortcall(a1000, 0, 1000 - 1);
	Print(4, 1000, cs);
	FinCount = 0;
	mergesort2(a2000, 0, 2000 - 1);
	FinTime = mergeSortcall(a2000, 0, 2000 - 1);
	Print(4, 2000, cs);
	FinCount = 0;
	mergesort2(a4000, 0, 4000 - 1);
	FinTime = mergeSortcall(a4000, 0, 4000 - 1);
	Print(4, 4000, cs);
	FinCount = 0;
	mergesort2(a10000, 0, 10000 - 1);
	FinTime = mergeSortcall(a10000, 0, 10000 - 1);
	Print(4, 10000, cs);
	FinCount = 0;

	/*
	//Quick Sort Case 3
	quickSortSteps(a100, 0, 100 - 1);
	FinTime = quickSortTimecall(a100, 0, 100 - 1);
	Print(5, 100, cs);
	FinCount = 0;
	quickSortSteps(a200, 0, 200 - 1);
	FinTime = quickSortTimecall(a200, 0, 200 - 1);
	Print(5, 200, cs);
	FinCount = 0;
	quickSortSteps(a300, 0, 300 - 1);
	FinTime = quickSortTimecall(a300, 0, 300 - 1);
	Print(5, 300, cs);
	FinCount = 0;
	quickSortSteps(a400, 0, 400 - 1);
	FinTime = quickSortTimecall(a400, 0, 400 - 1);
	Print(5, 400, cs);
	FinCount = 0;
	quickSortSteps(a500, 0, 500 - 1);
	FinTime = quickSortTimecall(a500, 0, 500 - 1);
	Print(5, 500, cs);
	FinCount = 0;
	quickSortSteps(a1000, 0, 1000 - 1);
	FinTime = quickSortTimecall(a1000, 0, 1000 - 1);
	Print(5, 1000, cs);
	FinCount = 0;
	quickSortSteps(a2000, 0, 2000 - 1);
	FinTime = quickSortTimecall(a2000, 0, 2000 - 1);
	Print(5, 2000, cs);
	FinCount = 0;
	quickSortSteps(a4000, 0, 4000 - 1);
	FinTime = quickSortTimecall(a4000, 0, 4000 - 1);
	Print(5, 4000, cs);
	FinCount = 0;
	quickSortSteps(a10000, 0, 10000 - 1);
	FinTime = quickSortTimecall(a10000, 0, 10000 - 1);
	Print(5, 10000, cs);
	FinCount = 0;
	*/
	

	//Bubble Sort Improved Case 3
	FinCount = improved_bubbleSteps(a100, 100);
	FinTime = improved_bubbleTime(a100, 100);
	Print(6, 100, cs);
	FinCount = improved_bubbleSteps(a200, 200);
	FinTime = improved_bubbleTime(a200, 200);
	Print(6, 200, cs);
	FinCount = improved_bubbleSteps(a300, 300);
	FinTime = improved_bubbleTime(a300, 300);
	Print(6, 300, cs);
	FinCount = improved_bubbleSteps(a400, 400);
	FinTime = improved_bubbleTime(a400, 400);
	Print(6, 400, cs);
	FinCount = improved_bubbleSteps(a500, 500);
	FinTime = improved_bubbleTime(a500, 500);
	Print(6, 500, cs);
	FinCount = improved_bubbleSteps(a1000, 1000);
	FinTime = improved_bubbleTime(a1000, 1000);
	Print(6, 1000, cs);
	FinCount = improved_bubbleSteps(a2000, 2000);
	FinTime = improved_bubbleTime(a2000, 2000);
	Print(6, 2000, cs);
	FinCount = improved_bubbleSteps(a4000, 4000);
	FinTime = improved_bubbleTime(a4000, 4000);
	Print(6, 4000, cs);
	FinCount = improved_bubbleSteps(a10000, 10000);
	FinTime = improved_bubbleTime(a10000, 10000);
	Print(6, 10000, cs);


	cs = 4;
	int count = 0;
	double Timeinsert[9]{ 0 }, StepInsert[9]{ 0 }, TimeSelection[9]{ 0 }, StepSelection[9]{ 0 }, TimeBubble, StepBubble, TimeMerge, StepMerge, TimeQuick, StepQuick, TimeBI, StepBI;
	while (count < 50)
	{
		case4();

		StepInsert[0] += insertion_sortSTEPS(a100, 100);
		Timeinsert[0] += insertion_sortTime(a100, 100);
		StepInsert[1] += insertion_sortSTEPS(a200, 200);
		Timeinsert[1] += insertion_sortTime(a200, 200);
		StepInsert[2] += insertion_sortSTEPS(a300, 300);
		Timeinsert[2] += insertion_sortTime(a300, 300);
		StepInsert[3] += insertion_sortSTEPS(a400, 400);
		Timeinsert[3] += insertion_sortTime(a400, 400);
		StepInsert[4] += insertion_sortSTEPS(a500, 500);
		Timeinsert[4] += insertion_sortTime(a500, 500);
		StepInsert[5] += insertion_sortSTEPS(a1000, 1000);
		Timeinsert[5] += insertion_sortTime(a1000, 1000);
		StepInsert[6] += insertion_sortSTEPS(a2000, 2000);
		Timeinsert[6] += insertion_sortTime(a2000, 2000);
		StepInsert[7] += insertion_sortSTEPS(a4000, 4000);
		Timeinsert[7] += insertion_sortTime(a4000, 4000);
		StepInsert[8] += insertion_sortSTEPS(a10000, 10000);
		Timeinsert[8] += insertion_sortTime(a10000, 10000);

		FinTime = 0;
		FinCount = 0;
		/*
		FinCount = selectionSortSteps(a100, 100);
		FinTime = selectionSortTime(a100, 100);
		Print(2, 100, cs);
		StepSelection += FinCount;
		TimeSelection += FinTime;
		FinCount = selectionSortSteps(a200, 200);
		FinTime = selectionSortTime(a200, 200);
		Print(2, 200, cs);
		StepSelection += FinCount;
		TimeSelection += FinTime;
		FinCount = selectionSortSteps(a300, 300);
		FinTime = selectionSortTime(a300, 300);
		Print(2, 300, cs);
		StepSelection += FinCount;
		TimeSelection += FinTime;
		FinCount = selectionSortSteps(a400, 400);
		FinTime = selectionSortTime(a400, 400);
		Print(2, 400, cs);
		StepSelection += FinCount;
		TimeSelection += FinTime;
		FinCount = selectionSortSteps(a500, 500);
		FinTime = selectionSortTime(a500, 500);
		Print(2, 500, cs);
		StepSelection += FinCount;
		TimeSelection += FinTime;
		FinCount = selectionSortSteps(a1000, 1000);
		FinTime = selectionSortTime(a1000, 1000);
		Print(2, 1000, cs);
		StepSelection += FinCount;
		TimeSelection += FinTime;
		FinCount = selectionSortSteps(a2000, 2000);
		FinTime = selectionSortTime(a2000, 2000);
		Print(2, 2000, cs);
		StepSelection += FinCount;
		TimeSelection += FinTime;
		FinCount = selectionSortSteps(a4000, 4000);
		FinTime = selectionSortTime(a4000, 4000);
		Print(2, 4000, cs);
		StepSelection += FinCount;
		TimeSelection += FinTime;
		FinCount = selectionSortSteps(a10000, 10000);
		FinTime = selectionSortTime(a10000, 10000);
		Print(2, 10000, cs);
		StepSelection += FinCount;
		TimeSelection += FinTime;

		*/
		count++;
	}
	
	cout << "finished";
}