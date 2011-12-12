#ifndef _INTVECTIR_H

#define TRUE 1
#define FALSE 0

typedef struct
{
	int size;
	int capacity;
	int *data;
} IntVector, *IntVectorPtr;

IntVectorPtr VecNew(int  initialCapacity);
void VecDelete(IntVector *vector);
IntVectorPtr VecAdd(IntVectorPtr vector, int element);
int VecErase(IntVectorPtr vector, int posistion);
double VecAverage(int *v, int size);
int VecMin(int *v, int size);
int VecMax(int *v, int size);
#endif
