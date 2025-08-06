#include <stdio.h>

int main() {
    int i = 1 , num , sum =0;
    
    printf("Enter the number:");
    scanf("%d" , &num);
    
    while (i <= num){
        if (!(i % 2 == 0)){
        sum = sum + i;
        }
        i++;
    }
         printf("the total sum is:%d\n" , sum);

    return 0;
}
