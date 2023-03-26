#include <stdio.h>

int int_array_length(float vec[]){
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

struct vector_3d {
	char name[8];
	float value[3]; /* dont know yet how to initialize empty array...*/
	int length = int_array_length(array);
} vec_1, vec_2;

float add_two_vectors (struct vec_1[], struct vec_2){
	/* adding two vectors */	
	int len1 = vec_1.length;
	int len2 = vec_2.length;
	assert(len1==len2);
	float result[len1];  
	for (i=0; i<len1; i++){
		result[i] = vec_1.value[i]+vec_2.value[i];
	};
	return result;
}





int main(int argc, char *argv[]){
	int i; /* incrementor */

	/* Adding two vectors */ 
	struct vector_3d vec_1 = {"Vector 1", {1.0, 0.0, 0.3}};
	struct vector_3d vec_2 = {"Vector 2", {0.0, 1.0, 0.3}};
	int length = vector_3d.length;

	float result = add_two_vectors(vec_1, vec_2);

	/* print the result*/
	printf("Result from adding the two vectors:\n");

	for (i=0; i<length; i++){
		printf("\tValue %d: %d\n", i, result[i]);
	};
	return 0;
}
