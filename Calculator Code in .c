#include <stdio.h>

int main() {
    int num1 , num2 , choice;
    
    printf("enter the value:");
    scanf("%d" , &num1);
    
    printf("enter the value:");
    scanf("%d" , &num2);
    
    printf("1. Choose the operation:\n");
    printf("2. Addition\n");
    printf("3. Substraction\n");
    printf("4. Multiplication\n");
    printf("5. Division \n");
    printf("6. Modulus \n");
    
    printf("enter the choice (1 to 5):");
    scanf("%d" , &choice);
    
    if (choice == 1){
         printf("result = %d\n" , num1 + num2);
    }else if (choice == 2){
         printf("result = %d\n" , num1 - num2);
    }else if (choice == 3){
         printf("result = %d\n" , num1 * num2);
    }else if (choice == 4){
         printf("result = %d\n" , num1 / num2);
    }else if (choice == 5){
         printf("result = %d\n" , num1 % num2);
    }else {
        printf("Invalid choice! \n");
    }

    return 0;
}
