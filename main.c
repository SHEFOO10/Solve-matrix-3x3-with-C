#include <stdio.h>
#include "matrix3x3.h"


int main()
{
    float x, y, z;

    matrix3x3 equations_container = equations();
    int determinant = find_determinant(&equations_container);
    matrix3x3 *inversed = matrix_inverse(&equations_container);
    find_xyz(inversed, determinant, &x, &y, &z);

    printf("x = %.1f, y = %.1f, z = %.1f", x, y, z);

    return 0;
}