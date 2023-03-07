#include <stdio.h>
#include "matrix3x3.h"


int main()
{
    float x, y, z;

    matrix3x3 equations_container = equations();
    float determinant = find_determinant(&equations_container);
    matrix3x3 *inversed = matrix_inverse(&equations_container);
    find_xyz(inversed, determinant, &x, &y, &z);

    if (determinant == 0)
    {
        printf("many solutions");
    }
    else
    {
            printf("x = %.1f, y = %.1f, z = %.1f", x, y, z);
    }
    
    
    

    return 0;
}