// SortData.cpp : Defines the entry point for the console application.
//Nokrashy just made a changes it's now 5:56pm 18/10/2016 just for testing how to commit new changes
//Nokrashy just made a changes it's now 5:58pm 18/10/2016 just for testing how to commit new changes
// update

#include "stdafx.h"
#include <fstream>
using namespace std;
int DATA_SIZE=0;
	int i=0 ;
    const int n = 1000;
	float OrgData[n];
    #define NULL ("\n")
int main(int argc, char**argv)
{
	// comment on date 18/10/2016
	//float *ptr = (float*) new(1000);
	//new();
	//malloc()
	// first commit test ;
	printf("argc = %d", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("\narg %d ==> %s", i, argv[i]);

	}
	//read from file 
	ifstream reader("file1.txt"); 
	if (reader.is_open())
	{
		printf("sucess");
	}
	else
	{
		printf("error");
	}
    while (!reader.eof())  
	{
	if (reader!=NULL)
	{
    reader >> OrgData[i];
	i++; 
	}
	}
	DATA_SIZE=i;
	reader.close();
	//sort data
	for (int i=0;i<DATA_SIZE;i++) 
	{
		float smlst = OrgData[i];
		int sIndx = i;
		for (int j = i + 1;j < DATA_SIZE;j++)
		{
			if (OrgData[j] < smlst)
			{
				sIndx = j;
				smlst = OrgData[j];
			}
		}
		float temp = OrgData[i];
		OrgData[i] = smlst;
		OrgData[sIndx] = temp;
	}
	
	//write into file
	ofstream writer("file2.txt");
	writer <<"the sorted data: "<<endl;
	for (int i = 0;i < DATA_SIZE;i++)
	{
	writer<<OrgData[i]<<endl;
	}
	writer.close();
	int c = getchar();
	return 0;
}