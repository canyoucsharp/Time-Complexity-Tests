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
		SelectionFile.open("Select.csv");
		BubbleFile.open("Bubble.csv");
		BubbleImpFile.open("Bubbleimp.csv");
		MergeFile.open("Merge.csv");
		QuickFile.open("Quick.csv");
		LastCase.open("LastCase.csv");



		Ins=false;
		Sel = false;
		Bub = false;
		Mer = false;
		Quic = false;
		BubI = false;
	}
	~Sorting()
	{
		InsertionFile.close();
		SelectionFile.close();
		BubbleFile.close();
		MergeFile.close();
		QuickFile.close();
		BubbleImpFile.close();
		LastCase.close();
	}
	
	
	
	void InitSorted();//initalize all the arrays to fit case 1 which is a sorted list of numbers
	void InitReverseSorted();//initalize all the arrays to fit case 2 which is a sorted list of numbers backwards
	void InitPermutation();//initialize all the arrays to fit case 3 which is a permuted list 
	void InitRandom();//initialize all the arrays to fit case 4 which is a random list
	void DoReverseSort(int * arr,int n);
	void test();
 void display(int arr[], int size, ofstream &myfile);
	
	

	
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
	int* CopyArray(int arr[],int n);
	int FinCount;
	double FinTime;


	//printing
	ofstream InsertionFile;
	ofstream SelectionFile;
	ofstream BubbleFile;
	ofstream BubbleImpFile;
	ofstream MergeFile;
	ofstream QuickFile;
	ofstream LastCase;
	void PHead(int SortIdentifier);
	bool Ins;
	bool Sel;
	bool Bub;
	bool Mer;
	bool Quic;
	bool BubI;

	//insertion sort stuff
	int insertion_sortSTEPS(int arr[], int length);//returns the number of steps it takes to complete
	double insertion_sortTime(int arr[], int length);
	
	//selection sort stuff
	double selectionSortTime(int arr[], int n);
	int selectionSortSteps(int arr[], int n);

	//bubble sort stuff
	double bubbleTime(int arr[], int n);
	int bubbleSteps(int arr[], int n);
	double improved_bubbleTime(int arr[], int n);
	int improved_bubbleSteps(int arr[], int n);

	
	//merge sort stuff
	double mergeSortcall(int arr[], int l, int r);
	void merge(int arr[], int l, int m, int r);
	void mergeSort(int arr[], int l, int r);

	void merge1(int arr[], int l, int m, int r); //steps
	void mergesort2(int arr[], int l, int r);//
	
	
	
	
	//QuickSort Stuff
	double quickSortTimecall(int arr[], int low, int high);
	void quickSortTime(int arr[], int low, int high);
	void quickSortSteps(int arr[], int low, int high);
	int QuickPartitionTime(int A[], int p, int r);
	int QuickPartitionSteps(int A[], int p, int r);
};

#endif