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
		_a100 = new int[100];
		_a200 = new int[200];
		_a300 = new int[300];
		_a400 = new int[400];
		_a500 = new int[500];
		_a1000 = new int[1000];
		_a2000= new int[2000];
		_a4000 = new int[4000];
		_a10000= new int[10000];

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
	void DoSort(int * arr, int n);

	void InitReverseSorted();//initalize all the arrays to fit case 2 which is a sorted list of numbers backwards
	void DoReverseSort(int * arr, int n);

	void InitPermutation();//initialize all the arrays to fit case 3 which is a permuted list 
	void DoPermutation(int * arr, int n);

	void InitRandom();//initialize all the arrays to fit case 4 which is a random list
	void DoRandom(int * arr, int n);

	void test();
 void display(int arr[], int size, ofstream &myfile);
	
	

	
private://use significant names , Partition for quicksort = QuickPartition
	
	int * _a100;
	int * _a200;
	int * _a300;
	int * _a400;
	int * _a500;
	int * _a1000;
	int * _a2000;
	int * _a4000;
	int * _a10000;
		
	int *getArray100() {
		return CopyArray(_a100,100);
	}
	int *getArray200() {
		return CopyArray(_a200,200);
	}
	int *getArray300() {
		return CopyArray(_a300, 300);
	}
	int *getArray400() {
		return CopyArray(_a400, 400);
	}
	int *getArray500() {
		return CopyArray(_a500, 500);
	}
	int *getArray1000() {
		return CopyArray(_a1000, 1000);
	}
	int *getArray2000() {
		return CopyArray(_a2000, 2000);
	}
	int *getArray4000() {
		return CopyArray(_a4000, 4000);
	}
	int *getArray10000() {
		return CopyArray(_a10000, 10000);
	}
		

	//Call Functions
	void CallGroup(int cs);
	void InsCall(int * arr, int n,int cs);
	void SelCall(int * arr, int n, int cs);
	void BubCall(int * arr, int n, int cs);
	void MergeCall(int * arr, int n, int cs);
	void QuickCall(int * arr, int n, int cs);
	void IBubCall(int * arr, int n, int cs);

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
};

#endif