#include <stdio.h>
#include "matrix3x3.h"


int main()
{
    matrix3x3 equations = equations();
    int determinant = find_determinant(equations);
    printf("%d", determinant);
    return 0;
}