// SortData.cpp : Defines the entry point for the console application.
//Nokrashy just made a changes it's now 5:56pm 18/10/2016 just for testing how to commit new changes
//Nokrashy just made a changes it's now 5:58pm 18/10/2016 just for testing how to commit new changes

#include "stdafx.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <string.h>
//#define DATA_SIZE	((int)3)
using namespace std;
//float OrgData[DATA_SIZE];
char *InptFl;
char *OptFl;
char *NFnc;
#define NArgmnts  (int(3))
int main(int argc , char * argv[])
	{	int DATA_SIZE=0;
		int i=0 ;
		const int n = 1000;
		float OrgData[n];
		
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
			printf("%s\n",NFnc);
		}
		else
		{
			printf("<ERROR> note: Enter Two Files Name And Type Of Sorting [1 or 2] \n");
			return 0;
		}
		
		ifstream reader(InptFl); 
		if (reader.is_open())
		{
			printf("sucess");
		}
		else
		{
			printf("error");
			return 0 ;
		}
		while (!reader.eof())  
		{
			reader >> OrgData[i];
			i++; 
			
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
		ofstream writer(OptFl);
		writer <<"the sorted data: "<<endl;
		for (int i = 0;i < DATA_SIZE;i++)
		{
			writer<<OrgData[i]<<endl;
		}
		writer.close();
		int c = getchar();
		return 0;
}

