#include "cTools.h"

int filterIntegers(int *array, int length, int predicate(int,int), int **result){
	int i, yes, count=0;
	int* filtered = 0;
	for (i = 0; i < length; ++i){
		yes = predicate(array[i],i);
		if(yes){
			filtered = (int *)realloc(filtered, (count+1)*sizeof(int));
			filtered[count++] = array[i];
		}
	}
	*result = filtered;
	return count;
}

int filterStrings(char** strings, int length, predicateStr p, char ***result){
	int i, yes, count=0;
	char** filtered = 0;
	for (i = 0; i < length; ++i){
		yes = p(strings[i],i);
		if(yes){
			filtered = (char **)realloc(filtered, (count+1)*10);
			filtered[count++] = strings[i];
		}
	}
	*result = filtered;
	return count;
}