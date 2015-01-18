int reduceIntegers(int *array, int length, int (*reducer)(int,int));
float reduceFloats(float *array, int length, float (*reducer)(float,float));

int indexOf(char *str, char *keyword);