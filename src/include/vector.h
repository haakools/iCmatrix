#ifndef VECTOR_H
#define VECTOR_H


struct vector {
    int size;
    int length;
    float *array;
};
typedef struct vector Vector;

Vector* make_vector(int length, float *elements);
void add_vectors(Vector* v1, Vector* v2, Vector* v3);
void multiply_vectors(Vector* v1, Vector* v2, Vector* v3);
void subtract_vectors(Vector* v1, Vector* v2, Vector* v3);
void scale_vector(Vector* v1, float scale);
void print_vector(Vector* v1);

#endif /* VECTOR_H */
