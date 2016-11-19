#include "Header.h"


void Sorting::Print(int SortIdentifier, int CurrentSize,int Case,int arr[], ofstream &resultfile)
{
	/*
	Sort Identifiers :
	Insertion Sort = 1
	Selection Sort =2
	Bubble Sort =3
	Merge Sort =4
	Quick Sort =5
	*/	
	
	int *clone = arr;//clones the array passed in so that we can use the same array for number of steps
	
	
	
	switch (SortIdentifier)
	{
	case 1://insertion
	
			
		 resultfile  << "Insertion Sort with size " << CurrentSize << " Time = " << insertion_sortTime(arr, CurrentSize) << " Number of steps= "<< insertion_sortSTEPS(clone,CurrentSize) << " Case = " << Case << "\n";
		 
		 // display(arr, CurrentSize, resultfile);
		 break;
	case 2://selection
		
		resultfile << "Selection Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << insertion_sortSTEPS(arr, CurrentSize) << " Case = " << Case << "\n";
		break;
	case 3://bubble
		
		resultfile << "Bubble Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << insertion_sortSTEPS(arr, CurrentSize) << " Case = " << Case << "\n";
		break;
	case 4://merge
		

		resultfile << "Merge Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << insertion_sortSTEPS(arr, CurrentSize) << " Case = " << Case << "\n";
		break;
	case 5://quick
		
		resultfile << "Quick Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << insertion_sortSTEPS(arr, CurrentSize) << " Case = " << Case << "\n";
		break;


	}



}





