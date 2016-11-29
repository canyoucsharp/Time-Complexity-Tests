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
	
			
		 resultfile  << "Insertion Sort with size " << CurrentSize << " Time = " << FinTime<< " Number of steps= "<< FinCount<< " Case = " << Case << "\n";
		 
		 // display(arr, CurrentSize, resultfile);
		 break;
	case 2://selection
		
		resultfile << "Selection Sort with size " << CurrentSize << " Time = " << FinTime << " Number of steps= " << FinCount << " Case = " << Case << "\n";
		break;
	case 3://bubble
		
		resultfile << "Bubble Sort with size " << CurrentSize << " Time = " << FinTime << " Number of steps= " << FinCount << " Case = " << Case << "\n";
		break;
	case 4://merge
		

		resultfile << "Merge Sort with size " << CurrentSize << " Time = " << FinTime << " Number of steps= " << FinCount << " Case = " << Case << "\n";
		break;
	case 5://quick
		
		resultfile << "Quick Sort with size " << CurrentSize << " Time = " << FinTime << " Number of steps= " << FinCount << " Case = " << Case << "\n";
		break;


	}



}





