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


}