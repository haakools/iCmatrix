#ifndef MATRIX_H
#define MATRIX_H

#include "vector.h"

struct r_matrix { 
    int rows;
    Vector row[];
};
typedef struct r_matrix cMatrix;

typedef struct c_matrix { 
    int n_cols;
    Vector cols[];
} c_matrix;

typedef struct r_matrix rMatrix;





#endif /* VECTOR_H */

