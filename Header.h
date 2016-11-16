#pragma once

#ifndef HEADER_FILE
#define HEADER_FILE

#include <iostream>
#include <time.h>
#include <ctime>
using namespace std;

class Sorting
{
public://keep all main functions public and there subsidiary functions private.
	Sorting();
	~Sorting();
	
	
	
	void case1();//initalize all the arrays to fit case 1 which is a sorted list of numbers
	void case2();//initalize all the arrays to fit case 2 which is a sorted list of numbers backwards
	void case3();//initialize all the arrays to fit case 3 which is a permuted list 
	
	
	
	
	void insertion_sort(int arr[], int length);
	void quickSort(int arr[], int low, int high);
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
	
	

	//insertion sort stuff
	int inscounter;

	//selection sort stuff



	
	
	//merge sort stuff
	
	
	
	
	
	//QuickSort Stuff
	void QuickSwap(int* a, int* b);
	int QuickPartition(int arr[], int low, int high);
	
}obj;

#endif