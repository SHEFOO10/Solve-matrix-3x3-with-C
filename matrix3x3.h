#pragma once

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

matrix3x3 equations(void);

int find_determinant(matrix3x3 *equations);

matrix3x3 *matrix_inverse(matrix3x3 *equation);

int find_xyz(matrix3x3 *inversed, int determinant, float *x, float *y, float *z);
