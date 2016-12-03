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


	//Merge Sort Case 1
	mergeSortcall(a100, 0, 100 - 1);
	FinTime= mergeSortcall(a100,0, 100-1);
	Print(4, 100, cs);
	FinCount = 0;


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


}