#include "include/vector.h"
#include <assert.h>
#include <stdlib.h>


typedef struct vector {
    int size;
    int length;
    float *array;
} Vector;



// row-wise matrix
typedef struct r_matrix { 
    int rows;
    Vector row[];
} r_matrix;


// column-wise matrix
//typedef struct c_matrix { 
//    int n_cols;
//    Vector cols[];
//} c_matrix;


// vector-maker function with sanity check :)
Vector* make_vector(int length, float *elements) {

    assert(length == sizeof(&elements)/sizeof(float));

    Vector* vec = malloc(sizeof(Vector));

    vec->length = length;
    if (vec->array != NULL) {
        // Assigning the data
        vec->array = malloc(length*sizeof(float));
        for (int i=0; i < length; i++){
            vec->array[i] = elements[i]; // pointer to reference?
        }
    } else {
        free(vec);
        vec = NULL;
    }

    return vec;
}

