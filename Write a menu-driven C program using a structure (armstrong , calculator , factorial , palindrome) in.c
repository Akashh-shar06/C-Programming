// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

struct Data {
    float num1 , num2;
    int num;
    char option;
};

float calculator (float a , float b , char option);
int isArmstrong (int num);
int Factorial (int num);
int ispalindrome (int num);

int main () {
    struct Data d1;
    int choice;
    
    do {
        printf("\n------- MENU -------\n");
        printf("1. Calculator\n");
        printf("2. Armstrong Number\n");
        printf("3. Factorial Number\n");
        printf("4. Palindrome Number\n");
        printf("5. Exit\n");
        printf("Enter your Choice : ");
        scanf("%d" , &choice);
    
        switch (choice) {
        case 1:
            printf("Enter first number: ");
            scanf("%f", &d1.num1);
            printf("Enter operator (+, -, *, /): ");
            scanf(" %c", &d1.option);
            printf("Enter second number: ");
            scanf("%f", &d1.num2);

            float result = calculator(d1.num1, d1.num2, d1.option);
            printf("Result: %.2f %c %.2f = %.2f\n", d1.num1, d1.option, d1.num2, result);
            break;
            
        case 2:
            printf("Enter the number : ");
            scanf("%d" , &d1.num);
            
            if(isArmstrong(d1.num)){
                printf("%d is an Armstrong number.\n", d1.num);
            } else {
                printf("%d is not an Armstrong number.\n", d1.num);
            }
            break;
            
            case 3:
                printf("Enter a number: ");
                scanf("%d", &d1.num);
                
                if (d1.num < 0)
                printf("Factorial is not defined for negative numbers.\n");
            else
                printf("Factorial of %d is %d\n", d1.num, Factorial(d1.num));
            break;
            
        case 4:
                printf("Enter the number : ");
                scanf("%d" , &d1.num);
            
                if (d1.num  )
                printf("%d palindrome number. \n : " , d1.num);
            else 
                printf("%d is not palindrome number. \n : " , d1.num);
                
        case 5:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);


    return 0;
}

float calculate(float a, float b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : 0;
        default:
            printf("Invalid operator.\n");
            return 0;
    }
}






































































// Function definitions

// float calculate(float a, float b, char op) {
//     switch (op) {
//         case '+': return a + b;
//         case '-': return a - b;
//         case '*': return a * b;
//         case '/': return (b != 0) ? a / b : 0;
//         default:
//             printf("Invalid operator.\n");
//             return 0;
//     }
// }

// int isArmstrong(int num) {
//     int original = num, sum = 0, digits = 0, temp = num;

//     while (temp != 0) {
//         digits++;
//         temp /= 10;
//     }

//     temp = original;
//     while (temp != 0) {
//         int digit = temp % 10;
//         sum += power(digit, digits);  // Using custom power function
//         temp /= 10;
//     }

//     return sum == original;
// }

// int factorial(int num) {
//     int fact = 1;
//     for (int i = 1; i <= num; i++)
//         fact *= i;
//     return fact;
// }

// int isPalindrome(int num) {
//     int reversed = 0, original = num;

//     while (num != 0) {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }

//     return reversed == original;
// }

// // Custom power function (integer base and exponent)
// int power(int base, int exp) {
//     int result = 1;
//     for (int i = 0; i < exp; i++)
//         result *= base;
//     return result;
// }

