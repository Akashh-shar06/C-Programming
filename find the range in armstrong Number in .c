#include <stdio.h>

int main() {
    int end, i, num, remainder, result;

    printf("Enter the end value: ");
    scanf("%d", &end);

    printf("Armstrong numbers between 1 to %d are:\n", end);

    for(i = 1; i <= end; i++) {
        num = i;
        result = 0;

        while(num != 0) {
            remainder = num % 10;
            result = result + remainder * remainder * remainder; 
            num = num / 10;
        }

        if(result == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
