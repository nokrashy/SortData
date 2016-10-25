// SortData.cpp : Defines the entry point for the console application.
//Nokrashy just made a changes it's now 5:56pm 18/10/2016 just for testing how to commit new changes
//Nokrashy just made a changes it's now 5:58pm 18/10/2016 just for testing how to commit new changes

#include "stdafx.h"
#include <string.h>
#include <iostream>
#include <string.h>
#define DATA_SIZE	((int)3)
using namespace std;
float OrgData[DATA_SIZE];
char *InptFl = NULL;
char *OptFl = NULL;
char *NFnc = NULL;
#define NArgmnts  (int(3))
int main(int argc , char * argv[])
	{
		
		if (argc >= (NArgmnts+1)) 
		{
			InptFl = argv[1];
			OptFl = argv[2];
			NFnc = argv[3];
			printf("%s\n",InptFl);
			printf("%s\n",OptFl);
			printf("%s",NFnc);
		}
		else if (argc >= (NArgmnts)) 
		{
			InptFl = argv[1];
			OptFl = argv[2];
			NFnc = "1";
			printf("%s\n",InptFl);
			printf("%s\n",OptFl);
			printf("%s",NFnc);
		}
		else if (argc >= (NArgmnts-1)) 
		{
			InptFl = argv[1];
			OptFl = "File2.txt";
			NFnc = "1";
			printf("%s\n",InptFl);
			printf("%s\n",OptFl);
			printf("%s",NFnc);
		}
		else
		{
			printf("<ERROR> note: Enter Two Files Name And Type Of Sorting [1 or 2] \n");
			return 0;
		}
}

