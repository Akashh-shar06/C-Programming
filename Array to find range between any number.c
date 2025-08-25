#include <stdio.h>

int main() {
    int num , i , find,found = 0;
    
    printf("enter the range of array:");
    scanf("%d" , &num);
    
    int arr[num];
    
    printf("enter %d number:\n" , num);
    for(i = 0; i < num; i++){
        scanf("%d" , &arr[i]);
    }
    
    printf("enter the number to find:");
    scanf("%d" , &find);
    
    for(i = 0; i < num; i++){
        if(find == arr[i]){
            printf("\nNumber %d found at %d" , find , i+1);
            found = 1;
        }
    }
    
    if (found == 0){
        printf("Value not found");
    }
    return 0;
}
