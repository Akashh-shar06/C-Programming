// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i , num;
    
    printf("Enter the number:");
    scanf("%d" , &num);
    
    for(i = 1; i <=10; i++){
        if(i % 2 == 0){
            printf("%d * %d = %d\n" , i , num , num *i);
        }
    }

    return 0;
}
