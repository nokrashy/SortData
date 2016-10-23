// file insert.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <fstream>
using namespace std;
int main()  
{
	int DATA_SIZE=0;
	int i=0 ;
    const int n = 1000;
	float OrgData[n];
    #define NULL ("\n")

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