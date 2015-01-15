int filterIntegers(int *array, int length, int *filter(int), int **result){
	int i, required, count=0;
	 (*result) = (int *)0;
	for (i = 0; i < length; ++i)
	{
		required = (*filter)(array[i]);
		if(required){
			 *result = (int *)realloc(*result, sizeof(int));
			(*result)[count++] = array[i];
		}
	}
	return count;
}