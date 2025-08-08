#include <stdio.h>

int main() {
    int num1 , choice;

    printf("\n compose the operation:\n");
    printf("1. Reverse number\n");
    printf("2. Sum of N number\n");
    printf("3. Armstrong number\n");
    printf("4. fibonacci seriers\n");
    printf("5. Factorial number\n");
    
    printf("enter the choice :(1 to 5)");
    scanf("%d" , &choice );
    
    if (choice == 1){
        
        int num1 , reverse = 0 , remainder;
        
        printf("enter the value:");
        scanf("%d" , &num1);
        
        while (num1 != 0){
        remainder = num1 % 10;
        reverse = reverse * 10 + remainder;
        num1 /= 10;
        }
        
        printf("reverse number : %d\n" , reverse);
        
    }else if (choice == 2){
        
        int num1 , i = 1 , sum = 0;
        
        printf("enter the value:");
        scanf("%d" , &num1);
        
        while (i <= num1){
            sum = sum + i;
            i++;
        }
        
        printf("the total sum is: %d\n" , sum);
        
    }else if (choice == 3){
        
        int num1 , originalNum , remainder , result =0;
        
        printf("enter the value:");
        scanf("%d" , &num1);
        
        originalNum = num1;
        
        while (num1 != 0){
            remainder = num1 % 10;
            result = result + (remainder * remainder * remainder);
            num1 = num1 / 10;
        }
            if (result == originalNum)
                printf("%d is an armstrong number\n" , originalNum);
            else
                printf("%d is not an armstrong number\n" , originalNum);
            
    } else  if ( choice == 4){
        
        int num1 , a = 0 , b = 1 , sum;
    
    printf("enter the value:");
    scanf("%d" , &num1);
    printf("enter the fibonacci series : %d %d" , a , b);
    
    for (int i = 2; i < num1; i++){
        sum = a + b;
        printf("%d" , sum);
        a = b ;
        b = sum;
    } 
    
    } else if (choice == 5 ){
        
       int num1 , factorial=1 , i;
        
        printf("enter the value:");
        scanf("%d" , &num1);
        
        for (int i = 1 ; i <= num1 ; i++){
            factorial *= i;
            }
        printf("the factorial number is %d: %d\n" , num1 , factorial );
        
    }else{
        printf("invalid choice \n");
    }
    
    return 0;
    
}
