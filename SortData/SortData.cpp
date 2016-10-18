// SortData.cpp : Defines the entry point for the console application.
//Nokrashy just made a changes it's now 5:56pm 18/10/2016 just for testing how to commit new changes
//Nokrashy just made a changes it's now 5:58pm 18/10/2016 just for testing how to commit new changes

#include "stdafx.h"
#define DATA_SIZE	((int)3)
float OrgData[DATA_SIZE];
int main(int argc, char**argv)
{
	//float *ptr = (float*) new(1000);
	//new();
	//malloc()
	printf("argc = %d", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("\narg %d ==> %s", i, argv[i]);

	}


	int cccc = getchar();
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
		printf("\n i=%d in the loop smlst = %f",i, smlst);
		float temp = OrgData[i];
		OrgData[i] = smlst;
		OrgData[sIndx] = temp;
	}
	for (int i = 0;i < DATA_SIZE;i++)
	{
		printf("\nsorted data %f", OrgData[i]);
	}
	int i = getchar();
	return 0;
}