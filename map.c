int* mapIntegers(int *array, int length, int *mapper(int, int)){
	int i;
	int *mapped = (int*)malloc(sizeof(int)*length);
	for (i = 0; i < length; ++i)
	{
		mapped[i] = mapper(array[i],i);
	}
	return mapped;
}