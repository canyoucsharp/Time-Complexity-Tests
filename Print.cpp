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

	switch (SortIdentifier)
	{
			case 1:
				resultfile << "Insertion Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << count<<"\n";
			break;

			case 2:
				resultfile << "Selection Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << count << "\n";
			break;

			case 3:
				resultfile << "Bubble Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << count << "\n";
			break;

			case 4:
				resultfile << "Merge Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << count << "\n";
				break;

			case 5:
				resultfile << "Quick Sort with size " << CurrentSize << " Time = " << time << " Number of steps= " << count << "\n";
				break;
	}



}
