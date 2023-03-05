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


int find_determinant(matrix3x3 *equations)
{

    // here we do some magic
    // to get the determinant
    int determinant = (equation.A11 * (equation.A22 * equation.A33 - equation.A23 * equation.A32) \
            - equation.A12 * (equation.A21 * equation.A33 - equation.A23 * equation.A31) \
            + equation.A13 * (equation.A21 * equation.A32 - equation.A22 * equation.A31));

    printf("The determinant is : %d \n", determinant);
    return determinant;
}

matrix3x3 matrix_inverse(matrix3x3 *equation, int *determinant) 
{
    matrix3x3 temp = *equation;
    
    printf("Before Changing >>\n A11 = %d , A12 = %d , A13 = %d\nA21 = %d, A22 = %d, A23 = %d\nA31 = %d, A32 = %d, A33 = %d\n", equation->A11, equation->A12, equation->A13, equation->A21, equation->A22, equation->A23, equation->A31, equation->A32, equation->A33);

    // First Row
    equation->A11 = (temp.A22 * temp.A33 - temp.A23 * temp.A32) / *determinant;
    equation->A12 = -1 * ((temp.A21 * temp.A33 - temp.A23 * temp.A31) / *determinant);
    equation->A13 = (temp.A21 * temp.A32 - temp.A22 * temp.A31) / *determinant;
    // Second Row 
    equation->A21 = -1 * ((temp.A12 * temp.A33 - temp.A13 * temp.A32) / *determinant);
    equation->A22 = (temp.A11 * temp.A33 - temp.A13 * temp.A31) / *determinant;
    equation->A23 = -1 * ((temp.A11 * temp.A32 - temp.A12 * temp.A31) / *determinant);
    // Third Row  -1 * (
    equation->A31 = (temp.A12 * temp.A23 - temp.A13 * temp.A22) / *determinant;
    equation->A32 = -1 * ((temp.A11 * temp.A23 - temp.A13 * temp.A21) / *determinant);
    equation->A33 = (temp.A11 * temp.A22 - temp.A12 * temp.A21) / *determinant;

    printf("After changing >>\n A11 = %d , A12 = %d , A13 = %d\nA21 = %d, A22 = %d, A23 = %d\nA31 = %d, A32 = %d, A33 = %d", equation->A11, equation->A12, equation->A13, equation->A21, equation->A22, equation->A23, equation->A31, equation->A32, equation->A33);
    // temp.A11 = 12;
    // printf("A11 from matrix inverse function: %d \n", equation->A11); /* for only testing*/
    // printf("temp A11 after changing: %d", temp.A11);
    // return inversed
    
}
