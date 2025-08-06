1) Temporary Variable

#include <stdio.h>

int main() {
    int a = 5 , b = 10 , temp;
    
    temp = a;
    a = b;
    b = temp;
    
    printf("a = %d = %d\n" , a , b);

    return 0;
}

2) Swapping Without temporary Variable 

#include <stdio.h>

int main() {
    int a = 5 , b = 10 , temp;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("a = %d , b = %d\n" , a , b);

    return 0;
}
