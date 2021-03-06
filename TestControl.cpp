#include "Header.h"


void Sorting::display(int arr[],int size,ofstream &myfile)
{
	
	
	
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		if (i % 10 == 0 && i != 0)
		{
			cout<< endl;
		}

	}
	cout << endl;
	cout << "********************************************************" << endl;

}

int * Sorting::CopyArray(int * arr, int n)
{
	int *hold = new int[n];
	for (int i = 0; i < n; i++)
		hold[i] = arr[i];

	return hold;
}


void Sorting::test()
{
	InitSorted();
	CallGroup(1);
	InitReverseSorted();
	CallGroup(2);
	InitPermutation();
	CallGroup(3);

	

	int cs = 4;
	int count = 0;
	double Timeinsert[9]{ 0 }, StepInsert[9]{ 0 }, TimeSelection[9]{ 0 }, StepSelection[9]{ 0 }, TimeBubble[9]{ 0 }, StepBubble[9]{ 0 }, TimeMerge[9]{ 0 }, StepMerge[9]{ 0 }, TimeQuick[9]{ 0 }, StepQuick[9]{ 0 }, TimeBI[9]{ 0 }, StepBI[9]{ 0 };
	while (count < 50)
	{
		InitRandom();

		StepInsert[0] += insertion_sortSTEPS(getArray100(), 100);
		Timeinsert[0] += insertion_sortTime(getArray100(), 100);
		StepInsert[1] += insertion_sortSTEPS(getArray200(), 200);
		Timeinsert[1] += insertion_sortTime(getArray200(), 200);
		StepInsert[2] += insertion_sortSTEPS(getArray300(), 300);
		Timeinsert[2] += insertion_sortTime(getArray300(), 300);
		StepInsert[3] += insertion_sortSTEPS(getArray400(), 400);
		Timeinsert[3] += insertion_sortTime(getArray400(), 400);
		StepInsert[4] += insertion_sortSTEPS(getArray500(), 500);
		Timeinsert[4] += insertion_sortTime(getArray500(), 500);
		StepInsert[5] += insertion_sortSTEPS(getArray1000(), 1000);
		Timeinsert[5] += insertion_sortTime(getArray1000(), 1000);
		StepInsert[6] += insertion_sortSTEPS(getArray2000(), 2000);
		Timeinsert[6] += insertion_sortTime(getArray2000(), 2000);
		StepInsert[7] += insertion_sortSTEPS(getArray4000(), 4000);
		Timeinsert[7] += insertion_sortTime(getArray4000(), 4000);
		StepInsert[8] += insertion_sortSTEPS(getArray10000(), 10000);
		Timeinsert[8] += insertion_sortTime(getArray10000(), 10000);


		StepSelection[0] += selectionSortSteps(getArray100(), 100);
		TimeSelection[0] += selectionSortTime(getArray100(), 100);
		StepSelection[1] += selectionSortSteps(getArray200(), 200);
		TimeSelection[1] += selectionSortTime(getArray200(), 200);
		StepSelection[2] += selectionSortSteps(getArray300(), 300);
		TimeSelection[2] += selectionSortTime(getArray300(), 300);
		StepSelection[3] += selectionSortSteps(getArray400(), 400);
		TimeSelection[3] += selectionSortTime(getArray400(), 400);
		StepSelection[4] += selectionSortSteps(getArray500(), 500);
		TimeSelection[4] += selectionSortTime(getArray500(), 500);
		StepSelection[5] += selectionSortSteps(getArray1000(), 1000);
		TimeSelection[5] += selectionSortTime(getArray1000(), 1000);
		StepSelection[6] += selectionSortSteps(getArray2000(), 2000);
		TimeSelection[6] += selectionSortTime(getArray2000(), 2000);
		StepSelection[7] += selectionSortSteps(getArray4000(), 4000);
		TimeSelection[7] += selectionSortTime(getArray4000(), 4000);
		StepSelection[8] += selectionSortSteps(getArray10000(), 10000);
		TimeSelection[8] += selectionSortTime(getArray10000(), 10000);

		StepBubble[0] += bubbleSteps(getArray100(), 100);
		TimeBubble[0] += bubbleTime(getArray100(), 100);
		StepBubble[1] += bubbleSteps(getArray200(), 200);
		TimeBubble[1] += bubbleTime(getArray200(), 200);
		StepBubble[2] += bubbleSteps(getArray300(), 300);
		TimeBubble[2] += bubbleTime(getArray300(), 300);
		StepBubble[3] += bubbleSteps(getArray400(), 400);
		TimeBubble[3] += bubbleTime(getArray400(), 400);
		StepBubble[4] += bubbleSteps(getArray500(), 500);
		TimeBubble[4] += bubbleTime(getArray500(), 500);
		StepBubble[5] += bubbleSteps(getArray1000(), 1000);
		TimeBubble[5] += bubbleTime(getArray1000(), 1000);
		StepBubble[6] += bubbleSteps(getArray2000(), 2000);
		TimeBubble[6] += bubbleTime(getArray2000(), 2000);
		StepBubble[7] += bubbleSteps(getArray4000(), 4000);
		TimeBubble[7] += bubbleTime(getArray4000(), 4000);
		StepBubble[8] += bubbleSteps(getArray10000(), 10000);
		TimeBubble[8] += bubbleTime(getArray10000(), 10000);
		FinCount = 0;

		mergesort2(getArray100(), 0, 100 - 1);
		StepMerge[0] += FinCount;
		TimeMerge[0] += mergeSortcall(getArray100(), 0, 100 - 1);
		FinCount = 0; 
		mergesort2(getArray200(), 0, 200 - 1);
		StepMerge[1] += FinCount;
		TimeMerge[1] += mergeSortcall(getArray200(), 0, 200 - 1);
		FinCount = 0;
		mergesort2(getArray300(), 0, 300 - 1);
		StepMerge[2] += FinCount;
		TimeMerge[2] += mergeSortcall(getArray300(), 0, 300 - 1);
		FinCount = 0;
		mergesort2(getArray400(), 0, 400 - 1);
		StepMerge[3] += FinCount;
		TimeMerge[3] += mergeSortcall(getArray400(), 0, 400 - 1);
		FinCount = 0;
		mergesort2(getArray500(), 0, 500 - 1);
		StepMerge[4] += FinCount;
		TimeMerge[4] += mergeSortcall(getArray500(), 0, 500 - 1);
		FinCount = 0;
		mergesort2(getArray1000(), 0, 1000 - 1);
		StepMerge[5] += FinCount;
		TimeMerge[5] += mergeSortcall(getArray1000(), 0, 1000 - 1);
		FinCount = 0;
		mergesort2(getArray2000(), 0, 2000 - 1);
		StepMerge[6] += FinCount;
		TimeMerge[6] += mergeSortcall(getArray2000(), 0, 2000 - 1);
		FinCount = 0;
		mergesort2(getArray4000(), 0, 4000 - 1);
		StepMerge[7] += FinCount;
		TimeMerge[7] += mergeSortcall(getArray4000(), 0, 4000 - 1);
		FinCount = 0;
		mergesort2(getArray10000(), 0, 10000 - 1);
		StepMerge[8] += FinCount;
		TimeMerge[8] += mergeSortcall(getArray10000(), 0, 10000 - 1);
		FinCount = 0;

		quickSortSteps(getArray100(), 0, 100 - 1);
		StepQuick[0] += FinCount;
		TimeQuick[0] += quickSortTimecall(getArray100(), 0, 100 - 1);
		FinCount = 0;
		quickSortSteps(getArray200(), 0, 200 - 1);
		StepQuick[1] += FinCount;
		TimeQuick[1] += quickSortTimecall(getArray200(), 0, 200 - 1);
		FinCount = 0;
		quickSortSteps(getArray300(), 0, 300 - 1);
		StepQuick[2] += FinCount;
		TimeQuick[2] += quickSortTimecall(getArray300(), 0, 300 - 1);
		FinCount = 0;
		quickSortSteps(getArray400(), 0, 400 - 1);
		StepQuick[3] += FinCount;
		TimeQuick[3] += quickSortTimecall(getArray400(), 0, 400 - 1);
		FinCount = 0;
		quickSortSteps(getArray500(), 0, 500 - 1);
		StepQuick[4] += FinCount;
		TimeQuick[4] += quickSortTimecall(getArray500(), 0, 500 - 1);
		FinCount = 0;
		quickSortSteps(getArray1000(), 0, 1000 - 1);
		StepQuick[5] += FinCount;
		TimeQuick[5] += quickSortTimecall(getArray1000(), 0, 1000 - 1);
		FinCount = 0;
		quickSortSteps(getArray2000(), 0, 2000 - 1);
		StepQuick[6] += FinCount;
		TimeQuick[6] += quickSortTimecall(getArray2000(), 0, 2000 - 1);
		FinCount = 0;
		quickSortSteps(getArray4000(), 0, 4000 - 1);
		StepQuick[7] += FinCount;
		TimeQuick[7] += quickSortTimecall(getArray4000(), 0, 4000 - 1);
		FinCount = 0;
		quickSortSteps(getArray10000(), 0, 10000 - 1);
		StepQuick[8] += FinCount;
		TimeQuick[8] += quickSortTimecall(getArray10000(), 0, 10000 - 1);
		FinCount = 0;

		StepBI[0] += improved_bubbleSteps(getArray100(), 100);
		TimeBI[0] += improved_bubbleTime(getArray100(), 100);
		StepBI[1] += improved_bubbleSteps(getArray200(), 200);
		TimeBI[1] += improved_bubbleTime(getArray200(), 200);
		StepBI[2] += improved_bubbleSteps(getArray300(), 300);
		TimeBI[2] += improved_bubbleTime(getArray300(), 300);
		StepBI[3] += improved_bubbleSteps(getArray400(), 400);
		TimeBI[3] += improved_bubbleTime(getArray400(), 400);
		StepBI[4] += improved_bubbleSteps(getArray500(), 500);
		TimeBI[4] += improved_bubbleTime(getArray500(), 500);
		StepBI[5] += improved_bubbleSteps(getArray1000(), 1000);
		TimeBI[5] += improved_bubbleTime(getArray1000(), 1000);
		StepBI[6] += improved_bubbleSteps(getArray2000(), 2000);
		TimeBI[6] += improved_bubbleTime(getArray2000(), 2000);
		StepBI[7] += improved_bubbleSteps(getArray4000(), 4000);
		TimeBI[7] += improved_bubbleTime(getArray4000(), 4000);
		StepBI[8] += improved_bubbleSteps(getArray10000(), 10000);
		TimeBI[8] += improved_bubbleTime(getArray10000(), 10000);

		cout << "Finished  run :" << count << endl;
		count++;
	}

	int place[9]{ 100,200,300,400,500,1000,2000,4000,10000 };
	LastCase << "Sort,Size,AVG STEPS ,AVG TIMES ,\n";
	for (int x = 0; x < 9; x++)
	{
		double avgtime,avgstep;
		avgtime = Timeinsert[x];
		avgtime = avgtime / count;
		avgstep = StepInsert[x];
		avgstep = avgstep / count;
		LastCase << "Insertion Sort" << "," << place[x] << "," << avgstep << "," << avgtime << ",\n";
	}
	for (int x = 0; x < 9; x++)
	{
		double avgtime, avgstep;
		avgtime = TimeSelection[x];
		avgtime = avgtime / count;
		avgstep = StepSelection[x];
		avgstep = avgstep / count;
		LastCase << "Selection Sort" << "," << place[x] << "," << avgstep << "," << avgtime << ",\n";
	}
	for (int x = 0; x < 9; x++)
	{
		double avgtime, avgstep;
		avgtime = TimeBubble[x];
		avgtime = avgtime / count;
		avgstep = StepBubble[x];
		avgstep = avgstep / count;
		LastCase << "Bubble Sort" << "," << place[x] << "," << avgstep << "," << avgtime << ",\n";
	}
	for (int x = 0; x < 9; x++)
	{
		double avgtime, avgstep;
		avgtime = TimeMerge[x];
		avgtime = avgtime / count;
		avgstep = StepMerge[x];
		avgstep = avgstep / count;
		LastCase << "Merge Sort" << "," << place[x] << "," << avgstep << "," << avgtime << ",\n";
	}
	for (int x = 0; x < 9; x++)
	{
		double avgtime, avgstep;
		avgtime = TimeQuick[x];
		avgtime = avgtime / count;
		avgstep = StepQuick[x];
		avgstep = avgstep / count;
		LastCase << "Quick Sort" << "," << place[x] << "," << avgstep << "," << avgtime << ",\n";
	}
	
	for (int x = 0; x < 9; x++)
		{
			double avgtime, avgstep;
			avgtime = TimeBI[x];
			avgtime = avgtime / count;
			avgstep = StepBI[x];
			avgstep = avgstep / count;
			LastCase << "Improved Bubble Sort" << "," << place[x] << "," << avgstep << "," << avgtime << ",\n";
		}
	
	cout << "finished";
}