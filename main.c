#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vector.h"

#define N 100
#define initialCapacity 10

int main(void)
{
	IntVectorPtr vec = VecNew(initialCapacity);
	int pos;
	srand(time(NULL)); //seed random time

	for(int i=0;i<N;i++)
		vec=VecAdd(vec,rand()%100000); //vazoume ena tyxaio arithmo ews to 100000
	//  Emfanizoume ton pinaka an theloume na tsekaroume tis tims toy!
	// for(int i=0;i<N;i++)
	// 	printf("%d\n",vec->data[i]);

	printf("To megisto stoixeio einai: %d\n", VecMax(vec->data,vec->size));
	printf("To elaxisto stoixeio einai: %d\n", VecMin(vec->data,vec->size));
	printf("O mesos oros twn stoixeiwn einai: %lf\n",VecAverage(vec->data,vec->size));

	/* Parathetw ton kwdika gia thn xrhsh tou VecErase.
	O logos poy brisketai mesa se sxolia einai giati den 
	zhthtai sthn ekfwnisi, alla proforika sto ergasthrio. */

	//start
	/*
	printf("Poia thesi toy dianismatos thes na svistei?\n");
	scanf("%d",&pos);
	VecErase(vec,pos);
	*/
	//end

	VecDelete(vec);
	return 0;
}