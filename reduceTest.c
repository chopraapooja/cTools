#include <assert.h>


void test_reduceIntegers_on_providing_add_reducer_should_reduce_input_array_into_sum_of_its_elements(){
	int sample[4] = {1,2,3,4};
	int add(pv,cv){
		return pv+cv;
	}
	int reduced = reduceIntegers(sample,4,add);
	assert(reduced == 10);
}

