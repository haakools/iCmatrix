
#include <stdio.h>


// 
#include "include/vector.h"


int main(int argc, char *argv[]){
    printf("This is the worlds shittiest linalg library\n");
    printf("HERE COMES THE VECTOR\n");

    int length = 5;
    Vector* v1 = make_vector(length, (float[]){1.0, 2.0, 3.0, 4.0, 5.0});
    Vector* v2 = make_vector(length, (float[]){2, 2, 2, 2, 2});
    Vector* v3 = make_vector(length, (float[]){0, 0, 0, 0, 0});
   
  
    add_vectors(v1, v2, v3);

    if (v1 != NULL) {
        printf("Length of vector: %d\n", v3->length);
    } else {
        printf("The vector v1 is NULL");
    };
    
    if (v3 != NULL) {
        for (int i=0; i<5; i++) {
            printf("element %i: \t %1.2f \n",i,v3->array[i] );
        };
    }




    return 0;
}
