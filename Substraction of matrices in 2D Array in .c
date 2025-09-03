#include <stdio.h>

int main() {
    int row , coloum , i , j;
    
    printf("enter the range for row matrix:");
    scanf("%d" , &row);
    printf("enter the range for coloum matrix:");
    scanf("%d" , &coloum);
    
    int a[row][coloum] , b[row][coloum], sum[row][coloum];
    
    printf("\nEnter the number for first matrix:(%d x %d)\n" , row , coloum);
    for(i = 0; i < row; i++){
        for(j = 0; j < coloum; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    
    printf("\nEnter the number for second matrix:(%d x %d)\n" ,row , coloum);
    for(i = 0; i < row; i++){
        for(j = 0; j < coloum; j++){
            scanf("%d" , &b[i][j]);
        }
    }
    
    for(i = 0; i < row; i++){
        for(j = 0; j < coloum; j++){
            sum[i][j] = a[i][j] - b[i][j];
        }
    }
    
    printf("\nAddition for matrix:\n");
    for(i = 0; i < row; i++){
        for(j = 0; j < coloum; j++){
            printf("%d " , sum[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
