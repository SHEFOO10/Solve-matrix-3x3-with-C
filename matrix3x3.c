#include <stdio.h>
#include "matrix3x3.h"


// define equation
matrix3x3 equation;
int x, y, z;


matrix3x3 equations(void)
{

    // Here we ask user to put his 3 equations 

    printf("First equation:\nx: ");
    scanf("%d", &equation.A11);
    printf("y: ");
    scanf("%d", &equation.A12);
    printf("z: ");
    scanf("%d", &equation.A13);
    printf("= ");
    scanf("%d", &equation.A1C);
    
    printf("Second equation:\nx: ");
    scanf("%d", &equation.A21);
    printf("y: ");
    scanf("%d", &equation.A22);
    printf("z: ");
    scanf("%d", &equation.A23);
     printf("= ");
    scanf("%d", &equation.A2C);
    
    printf("Third equation:\nx: ");
    scanf("%d", &equation.A31);
    printf("y: ");
    scanf("%d", &equation.A32);
    printf("z: ");
    scanf("%d", &equation.A33);
     printf("= ");
    scanf("%d", &equation.A3C);

    return equation;
}


int find_determinant(matrix3x3 equations)
{

    // here we do some magic
    // to get the determinant
    int determinant = (equation.A11 * (equation.A22 * equation.A33 - equation.A23 * equation.A32) \
            - equation.A12 * (equation.A21 * equation.A33 - equation.A23 * equation.A31) \
            + equation.A13 * (equation.A21 * equation.A32 - equation.A22 * equation.A31));

    printf("The determinant is : %d", determinant);
    return determinant;
}

matrix3x3 matrix_inverse(matrix3x3 *equation) 
{
    matrix3x3 temp = *equation;
    // return inversed
    printf("%d", temp.A11);
}
