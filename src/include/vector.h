#ifndef VECTOR_H
#define VECTOR_H


struct vector {
    int size;
    int length;
    float *array;
};
typedef struct vector Vector;

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

Vector* make_vector(int length, float *elements);


#endif /* VECTOR_H */
