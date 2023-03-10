#include <stdio.h>

int int_array_length(int vec[]){
	/* Returns the size of an array 
	 * Very cheeky way of solving it, 
	 * Arrays passed as arguments are passed as 
	 * pointers. Therefore dereferencing it.
	 * Otherwise dividing by the memory size
	 * of each element. 
	 * Best way is to define this with #define ...,
	 * but alas...
	 * */
	size_t n = sizeof(*(vec)) / sizeof(int);
	return n;
};

int main(int argc, char *argv[]){
	int i; /* incrementor */

	/* Adding two vectors */ 
	int vec_1[] = {1,0,0};
	int vec_2[] = {0,1,0};
	int n_1 = int_array_length(vec_1);
	int n_2 = int_array_length(vec_2);

	int result[n_1];

	/* TODO add assertion between sizes */
	for (i=0; i<3; i++){
		result[i] = vec_1[i]+vec_2[i];
	};
	
	/* print the result*/
	printf("Result from adding the two vectors:\n");

	for (i=0; i<3; i++){
		printf("\t%d\n", result[i]);
	};
	return 0;
}
