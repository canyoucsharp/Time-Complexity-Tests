#include "Header.h"


void Sorting::display(int arr[],int size,ofstream &myfile)
{
	
	
	
	
	for (int i = 0; i < size; i++)
	{
		myfile << arr[i] << " ";
		if (i % 10 == 0 && i != 0)
		{
			myfile<< endl;
		}

	}
	myfile << endl;
	myfile << "********************************************************" << endl;

}
	




void Sorting::test()
{


	

		ofstream resultfile;
		resultfile.open("Insertion.txt");
		case3();
		Print(1, 100, 3, a100, resultfile);
		Print(1, 200, 3, a200, resultfile);
		Print(1, 300, 3, a300, resultfile);
		Print(1, 400, 3, a400, resultfile);
		Print(1, 500, 3, a500, resultfile);
		Print(1, 1000, 3, a1000, resultfile);
		Print(1, 2000, 3, a2000, resultfile);
		Print(1, 4000, 3, a4000, resultfile);
		Print(1, 10000, 3, a10000, resultfile);
	


}