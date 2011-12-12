#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

IntVectorPtr VecNew(int initialCapacity)
{
	//Desmevoume mnimi gia to dianysma
	IntVectorPtr vec = (IntVectorPtr)malloc(sizeof(IntVector));
	//Stin periptosi pou den ta kataferoyme, epistrefoume null
	if (vec == NULL)
		return NULL;
	
	//Desmevoume mnimi gia to data toy dianismatos
	vec->data = (int *)malloc(initialCapacity*sizeof(int));
	//Omoios an den ta kataferoyme
	if (vec->data == NULL)
	{
		free(vec);
		return NULL;
	}
	
	vec->size = 0; //Orizoume to size 0
	vec->capacity = initialCapacity; //Kai tin xwritikothta	
}

IntVectorPtr VecAdd(IntVectorPtr vector, int element)
{
	IntVectorPtr vec=vector;
	if(vec->size==vec->capacity) //An einai gemato to dianysma mas
		//Desmevoume xwro stin mnimi gia na to diplasiasoyme
	{
		int *newData = (int *)realloc(vec->data,vec->capacity*2*sizeof(int));
		if(newData == NULL)
			return NULL;
		vec->data=newData; 
		vec->capacity *= 2;
	}
	//Ekxoroume to element sti trexousa thesi toy data
	vec->data[vec->size]=element;
	vec->size++; //afksanoume to size kata 1
	return vec;		//epistrefoume to vec
}		

int VecErase(IntVectorPtr vector, int pos)
{
	if(pos<=vector->size)
	{
		vector->data[pos]=vector->data[vector->size];
		vector->size--;
		return vector->size+1;
	}
	else
		return -1;
}

void VecDelete(IntVectorPtr vector)
{
	free(vector);
}

double VecAverage(int *v, int size)
{
	int i;
	int sum=0;
	for(i=0;i<size;i++)
		sum+=v[i];	
	return (double)sum/(double)s;
}

int VecMin(int *v, int size)
{
	int min=v[0];
	for(int i=0;i<size;i++)
	{
		if(v[i]<min)
			min=v[i];
	}
	return min;
}

int VecMax(int *v, int size)
{
	int max=v[0];
	for(int i=0;i<size;i++)
	{
		if(v[i]>max)
			max=v[i];
	}
	return max;
}
