#include <stdio.h>
#include "BubbleSort.h"

void swap(int array[] , int index1 , int index2)
{
	int temp_array; //temporary storage for array;
	
	temp_array	  = array[index1];
	array[index1] = array[index2];
	array[index2] = temp_array;	
}

void SingleBubbleSort(int array[] , int size , int length)
{
	int i = 0;
	
	for( i ; i < size-1 ; i++)
	{
		if(array[length-i-2] > array[length-i-1])
		{
			swap(array , length-i-2 , length-i-1);
		}
		printf("value %d , %d\n ", array[length-i-2] , array[length-i-1]);
	}
	
}

void BubbleSort(int array[] , int length)
{
	int i = 0;
	for( i ; i < length-1 ; i++)
	{
		SingleBubbleSort(array , length , length);
	}
}