#pragma once

#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
#include <time.h>
#include <ctime>
#include <string>
#include<fstream>
#include <ostream>

using namespace std;


class Sorting
{
public: //keep all main functions public and there subsidiary functions private.
	Sorting()
	{
		a100 = new int[100];
		a200 = new int[200];
		a300 = new int[300];
		a400 = new int[400];
		a500 = new int[500];
		a1000 = new int[1000];
		a2000= new int[2000];
		a4000 = new int[4000];
		a10000= new int[10000];

		InsertionFile.open("Insert.csv");
		SelectionFile.open("PUTFILENAMEHERE");
		BubbleFile.open("PUTFILENAMEHERE");
		MergeFile.open("PUTFILENAMEHERE");
		QuickFile.open("PUTFILENAMEHERE");
	}
	~Sorting()
	{
		InsertionFile.close();
		SelectionFile.close();
		BubbleFile.close();
		MergeFile.close();
		QuickFile.close();
	}
	
	
	
	void case1();//initalize all the arrays to fit case 1 which is a sorted list of numbers
	void case2();//initalize all the arrays to fit case 2 which is a sorted list of numbers backwards
	void case3();//initialize all the arrays to fit case 3 which is a permuted list 
	void case4();//initialize all the arrays to fit case 4 which is a random list
	void test();
 void display(int arr[], int size, ofstream &myfile);
	
	

	
	void CreateArray(int arr[], int size);//user will choose what size array they will make , this function will create that array
										  //said array will then be used for all functions , all functions will have exact same numbers the idea here is to not declare all arrays
										  //at once and not waste ridiculous ammounts of memory.


	//if we choose to not use this way the other posibility is to just have one array ...
	//the only issue with this is if a user tests sort x for 100 , sort y for 200, sort y for 100, the times in test 1/3 will likely change
	//although this may not be significant for low numbers
private://use significant names , Partition for quicksort = QuickPartition
	
	int * a100;
	int * a200;
	int * a300;
	int * a400;
	int * a500;
	int * a1000;
	int * a2000;
	int * a4000;
	int * a10000;
		
		
	
		
	//general stuff
	int random(int n);
	void randomize(int arr[], int n);//shuffles a list of numbers
	void swap(int *a, int *b);//swaps two numbers used for case 3
	void Print(int SortIdentifier, int CurrentSize, int Case);
	int FinCount;
	double FinTime;


	//printing
	ofstream InsertionFile;
	ofstream SelectionFile;
	ofstream BubbleFile;
	ofstream MergeFile;
	ofstream QuickFile;

	//insertion sort stuff
	int insertion_sortSTEPS(int arr[], int length);//returns the number of steps it takes to complete
	double Sorting::insertion_sortTime(int arr[], int length);
	
	//selection sort stuff
	void selectionSortTime(int arr[], int n);
	void selectionSortSteps(int arr[], int n);

	//bubble sort stuff
	void bubbleTime(int arr[], int n);
	void bubbleSteps(int arr[], int n);
	void improved_bubbleTime(int arr[], int n);
	void improved_bubbleSteps(int arr[], int n);

	
	//merge sort stuff
	void merge(int arr[], int l, int m, int r);
	void mergeSort(int arr[], int l, int r);
	void merge1(int arr[], int l, int m, int r); //Still need to add these into mergesort.ccp
	void mergesort2(int arr[], int l, int r);//^^^^^^^^^^^^^^^^^^^^^^^^
	
	
	
	
	//QuickSort Stuff
	void quickSortTime(int arr[], int low, int high);
	void quickSortSteps(int arr[], int low, int high);
	int QuickPartitionTime(int A[], int p, int r);
	int QuickPartitionSteps(int A[], int p, int r);
};

#endif