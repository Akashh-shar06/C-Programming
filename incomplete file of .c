#include <stdio.h>

int Addition (int a , int b);
int Subtraction (int a , int b );
int Multiplication (int a , int b);
int Division (int a , int b);
int Modulus (int a , int b);

typedef int (*operation)(int, int);

int main() {
    int num1 , num2 , choice , result;
    operation op;
    char *opName = "";

    printf("Enter the first value : ");
    scanf("%d" , &num1);
    printf("Enter the second value : ");
    scanf("%d" , &num2);

    printf("\nChoose the operation");
    printf("\n 1. Addition");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. Modulus");

    printf("\n\nEnter the choice (1 to 5) : ");
    scanf("%d" , &choice);

    switch (choice) {
        case 1: 
            op = Addition; 
            opName = "Addition";
            break;
        case 2: 
            op = Subtraction; 
            opName = "Subtraction";
            break;
        case 3: 
            op = Multiplication; 
            opName = "Multiplication";
            break;
        case 4: 
            if (num2 != 0) {
                op = Division; 
                opName = "Division";
            } 
            break;
        case 5: 
            if (num2 != 0) {
                op = Modulus; 
                opName = "Modulus";
            } 
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    result = op(num1, num2);

    printf("\nOperation: %s = %d\n", opName, result);

    printf("Function pointer address: %p\n", (void*)op);

    return 0;
}

int Addition(int a, int b) { return a + b; }
int Subtraction(int a, int b) { return a - b; }
int Multiplication(int a, int b) { return a * b; }
int Division(int a, int b) { return a / b; }
int Modulus (int a , int b) { return a % b; }
