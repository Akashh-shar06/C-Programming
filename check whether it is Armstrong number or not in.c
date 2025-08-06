#include <stdio.h>

int main() {
    int num , originalNum , remainder , result = 0;
    
    printf("Enter the number:");
    scanf("%d" , &num);
    
    originalNum = num;
    
    while (num != 0){
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num / 10;
    }
    
    if (result == originalNum){
        printf("%d is an armstrong number.\n" , originalNum);
    }else {
        printf("%d is not an armstrong number.\n" , originalNum);
    }

    return 0;
}
