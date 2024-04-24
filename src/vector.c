#include "include/vector.h"
#include <stdlib.h>
#include <assert.h>

#include <stdio.h>

// vector-maker function with sanity check :)
Vector* make_vector(int length, float *elements) {
    Vector* vec = malloc(sizeof(Vector));
    vec->length = length;
    vec->array = malloc(length*sizeof(float));
    if (vec->array !=NULL) {
        for (int i=0; i < length; i++){
            vec->array[i] = elements[i]; // pointer to reference?
        }
    }
    return vec;
}

/*
 * adds v1 and v2 together into v3. 
 *
 *
 */
void add_vectors(Vector* v1, Vector* v2, Vector* v3) {
    assert(v1->length == v2->length);
    for (int i=0; i<v1->length; i++) {
        v3->array[i] = v1->array[i] + v2->array[i];
    }
}

void multiply_vectors(Vector* v1, Vector* v2, Vector* v3) {
    assert(v1->length == v2->length);
    for (int i=0; i<v1->length; i++) {
        v3->array[i] = v1->array[i] * v2->array[i];
    }
}

void subtract_vectors(Vector* v1, Vector* v2, Vector* v3) {
    assert(v1->length == v2->length);
    for (int i=0; i<v1->length; i++) {
        v3->array[i] = v1->array[i] - v2->array[i];
    }
}

void scale_vector(Vector* v1, float scale) {
    assert(v1->length == v1->length);
    for (int i=0; i<v1->length; i++) {
        v1->array[i] = v1->array[i]*scale;
    }
}

void print_vector(Vector* pV) {

    if (pV != NULL) {
        for (int i=0; i<5; i++) {
            printf("e[%i]: \t %1.2f \n",i, pV->array[i] );
        };
    } 

}



