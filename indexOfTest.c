#include <assert.h>

void test_indexOf_should_give_the_index_of_matched_substring_in_a_string(){
	char str[] = "Coconut";
	char substring[] = "nut";
	int index = indexOf(str, substring);
	assert(index == 4);
}

void test_indexOf_should_give_the_index_of_first_substring_matched(){
	char str[] = "Coconut Chutney";
	char substring[] = "C";
	int index = indexOf(str, substring);
	assert(index == 0);
}

void test_indexOf_on_providing_space_as_substring_should_give_the_index_of_first_space_found_in_a_string(){
	char str[] = "Coconut Chutney";
	char substring[] = " ";
	int index = indexOf(str, substring);
	assert(index == 7);
}

void test_indexOf_should_return_negative_1_if_given_substring_doesnot_exsists_in_a_string(){
	char str[] = "Coconut";
	char substring[] = "Chutney";
	int index = indexOf(str, substring);
	assert(index == -1);
}

void test_indexOf_should_be_case_sensitive(){
	char str[] = "Coconut Chutney";
	char substring[] = "O";
	int index = indexOf(str, substring);
	assert(index == -1);
}

void test_indexOf_should_give_0_when_substring_to_be_found_is_same_as_string(){
	char str[] = "Coconut";
	char substring[] = "Coconut";
	int index = indexOf(str, substring);
	assert(index == 0);
}

