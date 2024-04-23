
#include <stdio.h>


// 
#include "vector.h"


int main(int argc, char *argv[]){
    printf("This is the worlds shittiest linalg library");

    printf("HERE COMES THE VECTOR");
    vector* v1 = make_vector(5, (float[]){1,2,3,4,5});

    printf("Length of vector: %d\n", v1->length);


    if (v1 != NULL) {
        for (int i; i<5; i++) {
            printf("element %i: %1.2f", i, v1->array[i] );
        };
    }

    return 0;
}
