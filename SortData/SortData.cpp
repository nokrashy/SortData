// SortData.cpp : Defines the entry point for the console application.
//Nokrashy just made a changes it's now 5:56pm 18/10/2016 just for testing how to commit new changes
//Nokrashy just made a changes it's now 5:58pm 18/10/2016 just for testing how to commit new changes


#include "stdafx.h"
#include <iostream>
using namespace std;

float Bubblesort(float*OrgData,float Data_size);
float indexsort(float*OrgData,float Data_size);

int main()
{  
char *NFnc ;
	if ( *NFnc==2)

	 Bubblesort(float*OrgData,float Data_size);

	else if (*NFnc==1)
	
		indexsort(float*OrgData,float Data_size);

	else 
	
		printf("\nerror");
	
	return 0;
}
float Bubblesort(float *OrgData,float Data_size)
{
for (int i=0;i<Data_size;i++)
{
	for (int j=0;j<Data_size-1;j++)
	{
		if (OrgData[j]>OrgData[j+1]){
			float swap = OrgData[j];
			OrgData[j] = OrgData[j+1];
			OrgData[j+1]=swap; }}
	
}
float indexsort(float *OrgData , float Data_size);
{
	for (int i=0;i<Data_size;i++) 
	{
		float smlst = OrgData[i];
		int sIndx = i;
		 for (int j = i + 1;j < Data_size;j++)
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
	} }