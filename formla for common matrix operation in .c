1. Addition
C[i][j] = A[i][j] + B[i][j];

2. Subtraction
C[i][j] = A[i][j] - B[i][j];

3. Multiplication
C[i][j] = 0;
for (k = 0; k < n; k++) {
    C[i][j] += A[i][k] * B[k][j];
}

4. Transpose
T[j][i] = A[i][j];
