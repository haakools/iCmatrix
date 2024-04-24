
#include <stdio.h>
#include "include/vector.h"


int main(int argc, char *argv[]){
    printf("This is the worlds shittiest linalg library\n");
    printf("HERE COMES THE VECTOR\n");

    int length = 5;
    Vector* pV1 = make_vector(length, (float[]){1.0, 2.0, 3.0, 4.0, 5.0});
    Vector* pV2 = make_vector(length, (float[]){2, 2, 2, 2, 2});
    Vector* pV3 = make_vector(length, (float[]){0, 0, 0, 0, 0});
   
  
    add_vectors(pV1, pV2, pV3);
    
    // Sanity
    if (pV1 != NULL) {
        printf("Length of Vector: %d\n", pV3->length);
    } else {
        printf("The Vector V1 is NULL");
    };

    print_vector(pV3);


    printf("Scaling with 0.5\n");
    float scale = 0.5;
    scale_vector(pV3, scale);
    print_vector(pV3);
    
    printf("Subtracting with Vector 2\n");
    subtract_vectors(pV3, pV2, pV3);
    print_vector(pV3);

    printf("Squaring the vector\n");
    multiply_vectors(pV3, pV3, pV3);
    print_vector(pV3);
    return 0;


}
