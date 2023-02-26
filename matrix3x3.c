#include <stdio.h>


typedef struct 
{
    int A11;
    int A12;
    int A13;
    int A1C;

    int A21;
    int A22;
    int A23;
    int A2C;

    int A31;
    int A32;
    int A33;
    int A3C;
} matrix3x3;

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
    
    printf("Second equation:\nx: \n");
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


int find_determinant(void)
{

    // here we do some magic
    // to get the determinant
    int determinant = (equation.A11 * (equation.A22 * equation.A33 - equation.A23 * equation.A32) \
            - equation.A12 * (equation.A21 * equation.A33 - equation.A23 * equation.A31) \
            + equation.A13 * (equation.A21 * equation.A32 - equation.A22 * equation.A31));

    printf("The determinant is : %d", determinant);
    return determinant;
}

int *matrix_inverse(void) 
{

}
