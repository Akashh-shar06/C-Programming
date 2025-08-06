#include <stdio.h>

int main() {
    int i , num;
    
    printf("Enter the number:");
    scanf("%d" , &num);
    
    for(i = 1; i <=10; i++){
        if(i % 2 == 0){
            continue;
        }
         printf("%d * %d = %d\n" , i , num , num*i);
    }

    return 0;
}
