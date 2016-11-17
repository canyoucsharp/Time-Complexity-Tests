#pragma once

#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
#include <time.h>
#include <ctime>
#include <fstream>
using namespace std;

class Sorting
{
public://keep all main functions public and there subsidiary functions private.
	Sorting()
	{
		myfile.open ("PUTFILENAMEHERE");
		a100 = new int[100];
		a200 = new int[200];
		a300 = new int[300];
		a400 = new int[400];
		a500 = new int[500];
		a1000 = new int[1000];
		a2000= new int[2000];
		a4000 = new int[4000];
		a10000= new int[10000];

	}
	~Sorting()
	{
		resultfile.close();
	}
	
	
	
	void case1();//initalize all the arrays to fit case 1 which is a sorted list of numbers
	void case2();//initalize all the arrays to fit case 2 which is a sorted list of numbers backwards
	void case3();//initialize all the arrays to fit case 3 which is a permuted list 
	void test();
	void display(int arr[], int size);
	
	
	void insertion_sort(int arr[], int length);
	void quickSort(int arr[], int low, int high);


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
	void Print(int SortIdentifier, int CurrentSize);//will be called by count function including identifier
	/* 
	Sort Identifiers :
	Insertion Sort = 1
	Selection Sort =2
	Bubble Sort =3
	Merge Sort =4
	Quick Sort =5
	*/
	
	
	//GENERAL VARIABLES
	int count;//COUNT FOR ALL FUNCTIONS
	int time;//TIME FOR ALL FUNCTIONS
	ofstream resultfile;

	//insertion sort stuff
	int inscounter;

	//selection sort stuff



	
	
	//merge sort stuff
	
	
	
	
	
	//QuickSort Stuff
	void QuickSwap(int* a, int* b);
	int QuickPartition(int arr[], int low, int high);
	
};

#endif
