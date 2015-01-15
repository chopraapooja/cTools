#include <stdio.h>
#include <assert.h>

void test_filter_______________________________________________________________________________(){
}

void test_filter_on_providing_operation_isEven_should_filter_even_numbers_from_sample_array(){
	int i;
	int sample[] = {2, 7, 8 ,6, 6, 1};
	int *filteredIntegers;
	int expected[] = {2,8,6,6};
	int isEven(int number){
		return number%2 ? 0 : 1;
	}
	int number_of_filteredIntegers = filterIntegers(sample, 6, isEven, &filteredIntegers);
	assert(number_of_filteredIntegers == 4);
	for (i = 0; i < number_of_filteredIntegers; ++i)
	{
		assert(filteredIntegers[i] == expected[i]);
	}
	free(filteredIntegers);
}
	
void test_filter_on_providing_operation_isEven_not_modify_input_array(){
	int i,sample[] = {2, 7, 8 ,6, 6, 1};
	int sampleBackup[] = {2, 7, 8 ,6, 6, 1};
	int *filteredIntegers;
	int expected[] = {2,8,6,6};
	int isEven(int number){
		return number%2 ? 0 : 1;
	}
	int number_of_filteredIntegers =filterIntegers(sample, 6, isEven, &filteredIntegers);
	assert(number_of_filteredIntegers == 4);
	for (i = 0; i < 6; ++i)
	{
		assert(sampleBackup[i] == sample[i]);
	}
}

void test_filter_End___________________________________________________________________________(){
	printf("\n\n");
}