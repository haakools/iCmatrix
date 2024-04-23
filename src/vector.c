

# include <assert.h>

#include <vector.h>

typedef struct {
    int length;
    float array[];
} vector;


// row-wise matrix
typedef struct { 
    int rows;
    vector row[];
} r_matrix;

// column-wise matrix
typedef struct { 
    int n_cols;
    vector cols[];
} c_matrix;


// vector-maker function with sanity check :)
vector make_vector(int length, float elements[]) {

    assert(length == sizeof(&elements)/sizeof(float));
    vector vec;
    vec.length = length;

    for (int i=0; i<length; i++){
        vec.array[i] = elements[i];
    }
    return vec;
}

