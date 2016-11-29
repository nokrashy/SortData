// file insert.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
//#define DATA_SIZE	((int)3)
using namespace std;
#define NArgmnts  (int(3))
float Bubblesort(float *OrgData,float DATA_SIZE)
{
	for (int i=0;i<DATA_SIZE;i++)
	{
		for (int j=0;j<DATA_SIZE-1;j++)
		{
			if (OrgData[j]>OrgData[j+1])
				{
					float swap = OrgData[j];
					OrgData[j] = OrgData[j+1];
					OrgData[j+1]=swap;
				}
		}
	
	}
	return *OrgData;
}
float indexsort(float *OrgData , float DATA_SIZE)
{
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
	return *OrgData;
}
int main(int argc , char * argv[])  
{
	char *InptFl;
	char *OptFl;
	int DATA_SIZE;
	char *NFnc;
	int i ;
    i=0;
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
	//read from file 
	
	ifstream reader(InptFl); 
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
			//if (!reader.end)
			{
				reader >> OrgData[i];
				i++; 
			}
		}	
	DATA_SIZE=i;
	reader.close();
	
  	if (*NFnc==2)
 		Bubblesort(OrgData,DATA_SIZE);
  	else
  		indexsort(OrgData, DATA_SIZE);
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