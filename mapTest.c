#include <assert.h>

test_mapIntegers_should_perform_increment_on_all_elements_of_array_and_should_return_mapped_array(){
	int sample[4] = {1,2,3,4};
	int expected[4] = {2,3,4,5};
	int i;	
	int increment(int number, int index){
		return number+1;
	}
	int *result = mapIntegers(sample, 4, increment);
	assertIntArrays(result,expected,4);
}

test_After_mapping_integers_input_array_should_be_intact(){
	int sample[4] = {1,2,3,4};
	int sampleBackup[4] = {1,2,3,4};
	int expected[4] = {2,3,4,5};
	int i;	
	int increment(int number, int index){
		return number+1;
	}
	int *result = mapIntegers(sample, 4, increment);
	assertIntArrays(sample,sampleBackup,4);
}