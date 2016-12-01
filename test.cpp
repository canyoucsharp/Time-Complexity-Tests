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
	FinCount=insertion_sortSTEPS(a100,100);
	FinTime=insertion_sortTime(a100, 100);
	Print(1, 100, cs);

	cout << "Time = " << FinTime << endl;
	cout << "Steps = " << FinCount << endl;
}