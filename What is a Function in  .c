What is a Function in C?
In C programming, a function is a block of code that performs a specific task. Instead of writing the same code again and again, we can reuse the function wherever needed.

Why Do We Use Functions in C?

Code Reusability – Write once, use many times.
Modularity – Split big programs into small modules.
Ease of Testing and Debugging – Each function can be tested separately.
Improved Readability and Maintenance – Organized structure.

Types of Functions in C
Functions in C can be categorized as:

1 - Library Functions
Built-in functions provided by C (e.g., printf(), scanf(), sqrt()).
No need to define them.

2 - User-defined Functions
Created by the programmer.
Syntax: return_type function_name(parameters) { /* code */ }

---------------------- Addition User Define Function Types ------------------------------
         1. Without Return & Without Parameters
         2. With Parameters & Without Return
         3. With Return & Without Parameters
         4. With Parameters & With Return

---------------------------------------------------------------------------------------
1. Without Return Value & Without Parameters
PROGRAM:---------------------

#include <stdio.h>

void add() { -- Parameter --}
    int a = 5, b = 3;
    int sum = a + b;
    printf("Sum = %d\n", sum);
}

int main() {
    add();  // function call Argument
    return 0;
}

**CODE** 
       ------------------------------- Example ----------------------------------
                  ** Without Return Value & Without Parameters **
#include <stdio.h>

void Addition(){
    int num1 , num2;
    printf("enter the value:");
    scanf("%d" , &num1);
    
    printf("enter the value:");
    scanf("%d" , &num2);
    
    printf("%d + %d = %d\n" , num1 , num2 , num1+num2);
}

void substraction() {
    int num1 , num2;
    printf("enter the value:");
    scanf("%d" , &num1);
    
    printf("enter the value:");
    scanf("%d" , &num2);
    
    printf("%d - %d = %d\n" , num1 , num2 , num1-num2);
}

void Multiplication(){
    int num1 , num2;
    printf("enter the value:");
    scanf("%d" , &num1);
    
    printf("enter the value:");
    scanf("%d" , &num2);
    
    printf("%d * %d = %d\n" , num1 , num2 , num1*num2);
}

void Division(){
    int num1 , num2;
    printf("enter the value:");
    scanf("%d" , &num1);
    
    printf("enter the value:");
    scanf("%d" , &num2);
    
    printf("%d / %d = %d\n" , num1 , num2 , num1/num2);
}

int main(){
    int choice;
    
    printf("\n enter the choice:\n");
    printf("1. Addtition\n");
    printf("2. Substration\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d" , &choice);
    
    switch(choice){
        case 1:
            Addition();
            break;    
        case 2:
            substraction();
            break;      
        case 3:
            Multiplication();
            break;
        case 4:
            Division();
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


2. Without return & Parameter passes 
#include <stdio.h>

// Function declaration
void printSquare(int num); // takes parameter, no return

int main() {
    int value;

    printf("Enter a number: ");
    scanf("%d", &value);

    printSquare(value); // calling function with a parameter

    return 0;
}

// Function definition
void printSquare(int num) {
    int square = num * num;
    printf("The square is: %d\n", square);
}

-------------------------------------------- EXAMPLE -------------------------------------------
                              ** Without return & Parameter passes ** 

#include <stdio.h>
         
void Swap(int a , int b){
    int temp;
    
    temp = a;
    a =b;
    b = temp;
    
    printf("After swap: a = %d b = %d\n" , a,b);
}

int main() {
    int num1 = 5 ,num2 = 10;
 printf("before swap :a = %d b = %d\n" , num1 , num2);
 
Swap(num1 , num2);

    return 0;
}

3. With Return & Without Parameter 

#include <stdio.h>

// Function declaration
int getNumber(void); // no parameter, returns int

int main() {
    int value;

    value = getNumber(); // calling the function

    printf("The number is: %d\n", value);

    return 0;
}

// Function definition
int getNumber(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    return num; // returning the value to main
}

--------------------------------------------- EXAMPLE ----------------------------------------------------
                                  ** With Return & Without Parameter **
#include <stdio.h>

int getSquare (void) {
    int num;
    
    printf("enter the value:");
    scanf("%d" , &num);
    
    return num * num;
}

int main() {
    
    int result;
    result = getSquare();
        
    printf("the square is: %d\n" , result);  
    return 0;
}

4. With Parameters & With Return

**CODE**

#include <stdio.h>
int add(int n1, int n2){
    return n1+n2;
}

int main() {
    int num1,num2;
    
    printf("Enter the value : ");
    scanf("%d",&num1);
    
    printf("Enter the value : ");
    scanf("%d",&num2);
    
    printf("%d + %d = %d",num1,num2,add(num1,num2));
    return 0;
}

