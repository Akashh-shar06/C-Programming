#include <stdio.h>

int main() {
    int arr[3][4], sum = 0;

    printf("Enter 12 numbers for a 3x4 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j]; 
        }
    }

    printf("\nThe 3x4 matrix is:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
