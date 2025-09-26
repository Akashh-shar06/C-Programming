#include <stdio.h>

    int Addition (int a , int b);
    int substraction (int a , int b );
    int multiplication (int a , int b);
    int division (int a , int b);
    int modulus (int a , int b);
    
int main() {
   int num1 , num2 , choice , result ;
    
    printf("Enter the value : ");
    scanf("%d" , &num1);
    printf("Enter the value : ");
    scanf("%d" , &num2);
    
    printf("\nchoose the operation");
    printf("\n 1.Addition");
    printf("\n 2.substraction");
    printf("\n 3.multiplication");
    printf("\n 4.division");
    printf("\n 5.modulus");
    
    printf("\n\nEnter the choice (1 to 5) : ");
    scanf("%d" , &choice);
    
    switch (choice) {
        case 1: result = Addition(num1, num2); break;
        case 2: result = substraction(num1, num2); break;
        case 3: result = multiplication(num1, num2); break;
        case 4: 
            if (num2 != 0)  result = division(num1, num2);

        case 5: result = modulus(num1 , num2); break;
    }
    printf("Result: %d\n", result);
    
    return 0;
}
int Addition(int a, int b) { return a + b; }
int substraction(int a, int b) { return a - b; }
int multiplication(int a, int b) { return a * b; }
int division(int a, int b) { return a / b; }
int modulus (int a , int b) { return a % b; }

