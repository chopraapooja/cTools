#include "cTools.h"

int reduceIntegers(int *array, int length, int (*reducer)(int,int,int), int initialValue){
	int i,pv=initialValue;
	for (i = 0; i < length; ++i)
	{
		pv = reducer(pv, array[i], i);
	}
	return pv;
}

float reduceFloats(float *array, int length, float (*reducer)(float,float,int), float initialValue){
	int i;
	float pv=initialValue;
	for (i = 0; i < length; ++i) {
		pv = reducer(pv, array[i], i);
	}
	return pv;
}