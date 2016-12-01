#include "Header.h"


void Sorting::Print(int SortIdentifier, int CurrentSize,int Case)
{
	/*
	Sort Identifiers :
	Insertion Sort = 1
	Selection Sort =2
	Bubble Sort =3
	Merge Sort =4
	Quick Sort =5
	*/	
	
	
	
	switch (SortIdentifier)
	{
	case 1://insertion
		//myfile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
			//case,size,steps,time,\n
		 InsertionFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		 
		 // display(arr, CurrentSize, resultfile);
		 break;
	case 2://selection
		
		SelectionFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		break;
	case 3://bubble
		
		BubbleFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		break;
	case 4://merge
		

		MergeFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		break;
	case 5://quick
		
		QuickFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		break;


	}



}





