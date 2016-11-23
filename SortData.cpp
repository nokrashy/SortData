// file insert.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <fstream>
#include <string>
using namespace std;
#define NArgmnts  (int(3))
int main(int argc , char * argv[])  
{
	char *InptFl;
	char *OptFl;
	int DATA_SIZE;
	int i ;
    const int n = 1000;
	float OrgData[n];
			InptFl = argv[1];
			OptFl = argv[2];
		
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
	if (argc >= (NArgmnts+1)) 
}