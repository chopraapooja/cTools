#include <stdio.h>
#include <assert.h>

void test_filter_On_providing_predicate_isEven_filterIntegers_should_filter_even_numbers_from_sample_array(){
	int i;
	int sample[] = {2, 7, 8 ,6, 6, 1};
	int *filteredIntegers;
	int expected[] = {2,8,6,6};

	int isEven(int number){
		return number%2 ? 0 : 1;
	}

	int number_of_filteredIntegers = filterIntegers(sample, 6, isEven, &filteredIntegers);
	assert(number_of_filteredIntegers == 4);
	for (i = 0; i < number_of_filteredIntegers; ++i){
		assert(filteredIntegers[i] == expected[i]);
	}
	free(filteredIntegers);
}

void test_filter_Predicate_should_be_able_to_access_element_and_its_index(){
	int i;
	int sample[] = {2, 7, 8 ,6, 6, 1};
	int *filteredIntegers;
	int expected[] = {7,6,1};

	int isEvenTerm(int number, int index){
		return (index+1)%2 ? 0 : 1;
	}

	int number_of_filteredIntegers = filterIntegers(sample, 6, isEvenTerm, &filteredIntegers);

	assert(number_of_filteredIntegers == 3);
	for (i = 0; i < number_of_filteredIntegers; ++i){
		assert(filteredIntegers[i] == expected[i]);
	}
	free(filteredIntegers);
}

void test_filter_During_filtering_filterIntegers_should_not_modify_input_array(){
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
		assert(sampleBackup[i] == sample[i]);
}

void test_filter_On_providing_predicate_doesStartWithVowel_filterStrings_should_filter_strings_from_sample_stringsArray(){
	int i;
	char **sample[5] = {"Apple", "Pineapple","Orange", "Grapes", "Stauberry"};
	char **filtered;
	char **expected[2] = {"Apple","Orange"};

	int doesStartWithVowel(char *string, int index){
		if(string[0] == 'A' || string[0] == 'E' || string[0] == 'I' || string[0] == 'O' || string[0] == 'U'){
			return 1;
		}
		return 0;
	}

	int len_of_filtered_strings = filterStrings(sample, 5, doesStartWithVowel, &filtered);
	
	assert(len_of_filtered_strings == 2);
	for (i = 0; i < len_of_filtered_strings; ++i){
		assert(filtered[i] == expected[i]);
	}
	free(filtered);
}

void test_filter_During_filtering_filterStrings_should_not_modify_input_array(){
	int i;
	char **sample[5] = {"Apple", "Pineapple","Orange", "Grapes", "Stauberry"};
	char **sampleBackup[5] = {"Apple", "Pineapple","Orange", "Grapes", "Stauberry"};
	char **filtered;
	char **expected[2] = {"Apple","Orange"};

	int doesStartWithVowel(char *string, int index){
		if(string[0] == 'A' || string[0] == 'E' || string[0] == 'I' || string[0] == 'O' || string[0] == 'U'){
			return 1;
		}
		return 0;
	}

	int len_of_filtered_strings = filterStrings(sample, 5, doesStartWithVowel, &filtered);
	
	for (i = 0; i < 5; ++i){
		assert(sample[i] == sampleBackup[i]);
	}
	free(filtered);
}