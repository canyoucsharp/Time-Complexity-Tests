#include "Header.h"



void Sorting::case1()
{
	
	int size;



	size = 100;
	for (int i = 0; i < size; i++)
	{
		a100[i] = i;


	}

	size = 200;
	for (int i = 0; i < size; i++)
	{
		a200[i] = i;


	}
	
	size = 300;
	for (int i = 0; i < size; i++)
	{
		a300[i] = i;


	}

	
	size = 400;
	for (int i = 0; i < size; i++)
	{
		a400[i] = i;


	}
	
	size = 500;
	for (int i = 0; i < size; i++)
	{
		a500[i] = i;


	}
	
	size = 1000;
	for (int i = 0; i < size; i++)
	{
		a1000[i] = i;


	}
	size = 2000;
	for (int i = 0; i < size; i++)
	{
		a2000[i] = i;


	}

	size = 4000;
	for (int i = 0; i < size; i++)
	{
		a4000[i] = i;


	}
	size = 10000;
	for (int i = 0; i < size; i++)
	{
		a10000[i] = i;


	}






}


void Sorting::case2()
{
int size;

size = 100;
int j = 0;
for (int i = size; i >0; i--)
{
	a100[j] = i;
	j++;


}

size = 200;
 j = 0;
for (int i = size; i >0; i--)
{
	a200[j] = i;
	j++;


}

size = 300;
 j = 0;
for (int i = size; i >0; i--)
{
	a300[j] = i;
	j++;


}


size = 400;
 j = 0;
for (int i = size; i >0; i--)
{
	a400[j] = i;
	j++;


}

size = 500;
j = 0;
for (int i = size; i >0; i--)
{
	a500[j] = i;
	j++;


}

size = 1000;
 j = 0;
for (int i = size; i >0; i--)
{
	a1000[j] = i;
	j++;


}
size = 2000;
 j = 0;
for (int i = size; i >0; i--)
{
	a2000[j] = i;
	j++;


}

size = 4000;
 j = 0;
for (int i = size; i >0; i--)
{
	a4000[j] = i;
	j++;


}
size = 10000;
j = 0;
for (int i = size; i >0; i--)
{
	a10000[j] = i;
	j++;


}






}


void Sorting::case3()
{

	int size;



	size = 100;
	for (int i = 0; i < size; i++)
	{
		a100[i] = i;


	}

	randomize(a100, size);
	//////////////////////////////////////////////////////////////////////////////////////
	size = 200;
	for (int i = 0; i < size; i++)
	{
		a200[i] = i;


	}
	randomize(a200, size);

	////////////////////////////////////////////////////////////////////////////////////	
	size = 300;
	for (int i = 0; i < size; i++)
	{
		a300[i] = i;


	}
	randomize(a300, size);
	/////////////////////////////////////////////////////////////////////////////

	size = 400;
	for (int i = 0; i < size; i++)
	{
		a400[i] = i;


	}
	randomize(a400, size);
	////////////////////////////////////////////////////////////////////////////////	
	size = 500;
	for (int i = 0; i < size; i++)
	{
		a500[i] = i;


	}

	randomize(a500, size);
	///////////////////////////////////////////////////////////////////////////////////////////////////



	size = 1000;
	for (int i = 0; i < size; i++)
	{
		a1000[i] = i;


	}

	randomize(a1000, size);
	//////////////////////////////////////////////////////////////////////////////
	size = 2000;
	for (int i = 0; i < size; i++)
	{
		a2000[i] = i;


	}
	randomize(a2000, size);
	//////////////////////////////////////////////////////////////////////////////////	
	size = 4000;
	for (int i = 0; i < size; i++)
	{
		a4000[i] = i;


	}

	randomize(a4000, size);
	//////////////////////////////////////////////////////////////////////////////////
	size = 10000;
	for (int i = 0; i < size; i++)
	{
		a10000[i] = i;


	}
	randomize(a10000, size);
	////////////////////////////////////////////////////////////////////////////////
}


void Sorting::case4()//generates random arrays for each array
{
	int size = 100;
	for (int i = 0; i < size; i++)
		{
				a100[i] = random(size);
	}

	/////////////////////////////////////////////////

	size = 200;
	
	
	for (int i = 0; i < size; i++)
	{
		a200[i] = random(size);
	}
	
	size = 300;
	for (int i = 0; i < size; i++)
	{
		a300[i] = random(size);
	}
	size = 400;
	for (int i = 0; i < size; i++)
	{
		a400[i] = random(size);
	}
	
	size = 500;
	for (int i = 0; i < size; i++)
	{
		a500[i] = random(size);
	}
	
	size = 1000;
	for (int i = 0; i < size; i++)
	{
		a1000[i] = random(size);
	}
	
	size = 2000;
	for (int i = 0; i < size; i++)
	{
		a2000[i] = random(size);
	}
	size = 4000;
	for (int i = 0; i < size; i++)
	{
		a4000[i] = random(size);
	}

	size = 10000;
	for (int i = 0; i < size; i++)
	{
		a10000[i] = random(size);
	}
}
