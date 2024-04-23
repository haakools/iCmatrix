#include "include/vector.h"
#include <stdlib.h>


// vector-maker function with sanity check :)
Vector* make_vector(int length, float *elements) {

    Vector* vec = malloc(sizeof(Vector));

    vec->length = length;
    // Assigning the data
    vec->array = malloc(length*sizeof(float));
    if (vec->array !=NULL) {
        for (int i=0; i < length; i++){
            vec->array[i] = elements[i]; // pointer to reference?
        }
    }

    return vec;
}
