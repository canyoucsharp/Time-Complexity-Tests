#include "Header.h"


void Sorting::Print(int SortIdentifier, int CurrentSize,int Case,int arr[])
{
	/*
	Sort Identifiers :
	Insertion Sort = 1
	Selection Sort =2
	Bubble Sort =3
	Merge Sort =4
	Quick Sort =5
	*/	
	
	int *clone = arr;
	ofstream resultfile;
	switch (SortIdentifier)
	{
	case 1://insertion
		
		 resultfile.open("Insertion.txt");
		 display(arr, CurrentSize, resultfile);
		 resultfile  << "Insertion Sort with size " << CurrentSize << " Time = " << insertion_sortTime(arr, CurrentSize) << " Number of steps= "<< insertion_sortSTEPS(clone,CurrentSize) << " Case = " << Case << "\n";
		break;
	case 2://selection
		resultfile.open("example.txt");
		resultfile << "Selection Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << insertion_sortSTEPS(arr, CurrentSize) << " Case = " << Case << "\n";
		break;
	case 3://bubble
		resultfile.open("example.txt");
		resultfile << "Bubble Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << insertion_sortSTEPS(arr, CurrentSize) << " Case = " << Case << "\n";
		break;
	case 4://merge
		resultfile.open("example.txt");

		resultfile << "Merge Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << insertion_sortSTEPS(arr, CurrentSize) << " Case = " << Case << "\n";
		break;
	case 5://quick
		resultfile.open("example.txt");
		resultfile << "Quick Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << insertion_sortSTEPS(arr, CurrentSize) << " Case = " << Case << "\n";
		break;


	}
	for (int i = 0; i < CurrentSize; i++)
	{
		resultfile << arr[i] << " ";
		if (i % 10 == 0 && i != 0)
		{
			resultfile << endl;
		}

	}
	resultfile << endl;
	resultfile << "********************************************************" << endl;


}





