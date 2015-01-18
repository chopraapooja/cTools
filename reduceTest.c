#include <assert.h>
#include "cTools.h"

void test_reduceIntegers_on_providing_reducer_add_should_reduce_input_array_into_sum_of_its_elements_plus_initialValue(){
	int sample[4] = {1,-2,3,4};
	int add(int pv,int cv,int index){
		return pv+cv;
	}
	int initialValue = 3;
	int reduced = reduceIntegers(sample,4,add,initialValue);
	assert(reduced == 9);
}

void test_reduceIntegers_on_providing_array_of_length_0_with_0_initialValue_should_give_0(){
	int *sample;
	int add(int pv,int cv,int index){
		return pv+cv;
	}
	int reduced = reduceIntegers(sample,0,add,0);
	assert(reduced == 0);
}

void test_reduceIntegers_on_providing_array_of_length_0_with_initialValue_10_should_give_initialValue_back(){
	int *sample;
	int add(int pv,int cv,int index){
		return pv+cv;
	}
	int reduced = reduceIntegers(sample,0,add,10);
	assert(reduced == 10);
}

void test_reduceIntegers_callback_should_be_able_to_receive_indexOf_the_current_element(){
	int sample[4] = {1,-2,3,4};
	int addIndex(int pv,int cv, int index){
		return pv+index;
	}
	int initialValue = 0;
	int reduced = reduceIntegers(sample,4,addIndex,initialValue);
	assert(reduced == 6);

}

// void test_reduceFloats_on_providing_add_reducer_should_reduce_input_array_into_sum_of_its_elements(){
// 	float sample[] = {2.5,3.5,-2,3};
// 	float add(float pv,float cv){
// 		return pv+cv;
// 	}
// 	float reduced=reduceFloats(sample,4,add);
// 	assert(reduced == 7.0);
// }

// void test_reduceFloats_on_providing_array_of_length_0_should_give_0(){
// 	float *sample;
// 	float add(float pv,float cv){
// 		return pv+cv;
// 	}
// 	float reduced = reduceIntegers(sample,0,add);
// 	assert(reduced == 0);
// }



