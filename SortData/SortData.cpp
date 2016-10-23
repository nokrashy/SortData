// SortData.cpp : Defines the entry point for the console application.
//Nokrashy just made a changes it's now 5:56pm 18/10/2016 just for testing how to commit new changes
//Nokrashy just made a changes it's now 5:58pm 18/10/2016 just for testing how to commit new changes

#include "stdafx.h"
#define DATA_SIZE	((int)3)
float OrgData[DATA_SIZE];
int main()

	{  
		float swap = 0;//bubble sort
	
for (int i=0;i<DATA_SIZE;i++)
{
	for (int j=0;j<DATA_SIZE-1;j++)
	{
		if (OrgData[j]>OrgData[j+1]){
			swap = OrgData[j+1];
			OrgData[j] = OrgData[j+1];
			OrgData[j+1]=swap; }}
	
}
	}
	for (int i = 0;i < DATA_SIZE;i++)
	{
		printf("\nsorted data %f", OrgData[i]);
	}
	int i = getchar();
	return 0;
}