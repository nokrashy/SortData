// SortData.cpp : Defines the entry point for the console application.
//Nokrashy just made a changes it's now 5:56pm 18/10/2016 just for testing how to commit new changes
//Nokrashy just made a changes it's now 5:58pm 18/10/2016 just for testing how to commit new changes

#include "stdafx.h"
#include <string.h>
#include <iostream>
#define DATA_SIZE	((int)3)
using namespace std;
float OrgData[DATA_SIZE];
char *FrstArg = NULL;
char *ScndArg = NULL;
int main(int argc , char * argv[])
	{
		
		if (argc != 3) {
			printf("please enter two files name \n");
		}
		
		else if (strlen(argv[1]) != 9) {
			printf("Invalid argument '%s'\n", argv[1]);
		}
		else if (strlen(argv[2]) != 9) {
			printf("Invalid argument '%s'\n", argv[2]);
		}

		FrstArg = argv[1];
		ScndArg = argv[2];
		printf("%s\n",FrstArg);
		printf("%s",ScndArg);

	
	

	/*for (int i=0;i<DATA_SIZE;i++) 
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
	return 0;*/
}

