#include <stdio.h>

int main() {
    int num , a = 0 , b = 1 , sum;
    
    printf("enter the number:");
    scanf("%d" , &num);
    
    printf("fibonacci series : %d %d " , a , b);
    
    for (int i = 2 ; i < num ; i++){
        sum = a + b;
        printf(" %d " , sum);
        a = b;
        b = sum;
    }

    return 0;
}
