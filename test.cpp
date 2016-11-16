#include "Header.h"


void Sorting::display(int arr[],int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{

		cout << arr[i] << " ";
		if (i % 10 == 0&& i!=0)
		{
			cout << endl;
		}

	}
	cout << endl;
	cout << "********************************************************" << endl;


}


void Sorting::test()
{


	case3();
	cout << "this is the unsorted array" << endl;
	display(a10000, 10000);
	
	insertion_sort(a10000, 10000);

	display(a10000, 10000);	



}