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

	//myfile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
	//case,size,steps,time,\n	
	
	switch (SortIdentifier)
	{
	case 1://insertion
		if (!Ins)
			PHead(SortIdentifier);

		 InsertionFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		 break;
	case 2://selection
		if (!Sel)
			PHead(SortIdentifier);

		SelectionFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		break;
	case 3://bubble
		if (!Bub)
			PHead(SortIdentifier);

		BubbleFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		break;
	case 4://merge
		if (!Mer)
			PHead(SortIdentifier);

		MergeFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		break;
	case 5://quick
		if (!Quic)
			PHead(SortIdentifier);

		QuickFile << Case << "," << CurrentSize << "," << FinCount << "," << FinTime << ",\n";
		break;


	}



}



void Sorting::PHead(int SortIdentifier)
{

	if (SortIdentifier == 1 && Ins == false)
		InsertionFile << "Case,Size,Steps,Time,\n";

	else if (SortIdentifier == 2 && Sel == false)
		SelectionFile << "Case,Size,Steps,Time,\n";

	else if (SortIdentifier == 3 && Bub == false)
		BubbleFile << "Case,Size,Steps,Time,\n";

	else if (SortIdentifier == 4 && Mer == false)
		MergeFile << "Case,Size,Steps,Time,\n";

	else if (SortIdentifier == 5 && Quic == false)
		QuickFile << "Case,Size,Steps,Time,\n";
}

