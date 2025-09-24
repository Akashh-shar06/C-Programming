1) BASIC CODE :-
  #include <stdio.h>

int main() {
    int num1 , num2 , *prt1, *prt2;
    
    printf("Enter The Value : ");
    scanf("%d" , &num1);
    
    printf("Enter The Value : ");
    scanf("%d" , &num2);
    
    prt1 = &num1;
    prt2 = &num2;
    
    printf("\nThe value in pointer1 %p \nThe value in Pointer2 %p " , prt1 , prt2);
    
    printf("\nThe value of that address is %d \nThe value of that address is %d" , *prt1 , *prt2);

    return 0;
}

2) ADDITION CODE BY POINTER :-
#include <stdio.h>

int main() {
    int num1 , num2 , *prt1 , *prt2;
    
    printf("Enter the value : ");
    scanf("%d" , &num1);
    
    printf("Enter the value : ");
    scanf("%d" , &num2);
    
    prt1 = &num1;
    prt2 = &num2;
    
    printf("\nThe value in pointer1 %p \nThe value of pointer2 %p" , *prt1+*prt2 , prt1 , prt2);
    
    printf("\nThe value of that address is %d \nThe value of that address is %d " , *prt1 , *prt2 );
    
    printf("\nthe addition of both the pointer is %d "  , *prt1 + *prt2);
    
    return 0;
}

3) SUBSTRACTION CODE :-
#include <stdio.h>

int main() {
    int num1 , num2 , *prt1 , *prt2;
    
    printf("enter the value : ");
    scanf("%d" , &num1);
    
    printf("enter the value : ");
    scanf("%d" , &num2);
    
    prt1 = &num1;
    prt2 = &num2;
    
    printf("\nThe value in pointer1 is %p \nThe value in pointer2 is %p" , prt1 , prt2);
    
    printf("\nThe value of that address is %d \nThe value of that address is %d" , *prt1 , *prt2);
    
    printf("\nThe Substraction of both the pointer is %d" , *prt1-*prt2);

    return 0;
}

4) MULTIPLICATION CODE :-
#include <stdio.h>

int main() {
    int num1 , num2 , *prt1 , *prt2;
    
    printf("enter the value : ");
    scanf("%d" , &num1);
    
    printf("enter the value : ");
    scanf("%d" , &num2);
    
    prt1 = &num1;
    prt2 = &num2;
    
    printf("\nThe value in pointer1 is %p \nThe value in pointer2 is %p" , prt1 , prt2);
    
    printf("\nThe value of that address is %d \nThe value of that address is %d" , *prt1 , *prt2);
    
    printf("\nThe Substraction of both the pointer is %d" , *prt1 * *prt2);
    return 0;
}

5) DIVISION CODE :-
#include <stdio.h>

int main() {
    int num1 , num2 , *prt1 , *prt2;
    
    printf("enter the value : ");
    scanf("%d" , &num1);
    
    printf("enter the value : ");
    scanf("%d" , &num2);
    
    prt1 = &num1;
    prt2 = &num2;
    
    printf("\nThe value in pointer1 is %p \nThe value in pointer2 is %p" , prt1 , prt2);
    
    printf("\nThe value of that address is %d \nThe value of that address is %d" , *prt1 , *prt2);
    
    printf("\nThe Substraction of both the pointer is %d" , *prt1 / *prt2);
    return 0;
}
