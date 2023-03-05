#include <stdio.h>
#include "matrix3x3.h"


int main()
{
    matrix3x3 equations_container = equations();
    int determinant = find_determinant(&equations_container);
    matrix_inverse(&equations_container, &determinant);

    return 0;
}