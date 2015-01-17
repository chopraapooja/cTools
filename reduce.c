int reduceIntegers(int *array, int length, int (*reducer)(int,int)){
	int i,pv=0,cv;
	for (i = 0; i < length; ++i)
	{
		pv = reducer(pv, array[i]);
	}
	return pv;
}