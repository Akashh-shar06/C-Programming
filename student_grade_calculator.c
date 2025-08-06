#include <stdio.h>

int main() {
    int eng , hindi , maths , science , biology , total;
    float percentage;
    
    printf("enter the eng marks:");
    scanf("%d" , &eng);
    
    printf("enter the hindi marks:");
    scanf("%d" , &hindi);
    
    printf("enter the maths marks:");
    scanf("%d" , &maths);
    
    printf("enter the science marks:");
    scanf("%d" , &science);
    
    printf("enter the biology marks:");
    scanf("%d" , &biology);
    
    total = eng + hindi + maths + science + biology;
    percentage = (total / 500.0) * 100;

    printf("total marks:%d\n" , total);
    printf("percentage:%2f%%\n" , percentage);
    
    if (percentage >= 90){
        printf("Grade:O grade\n");
    }else if (percentage >= 80){
        printf("Grade:A grade\n");
    }else if (percentage >= 70){
        printf("Grade: B grade\n");
    }else if (percentage >= 60){
        printf("Grade: C grade\n");
    }else if (percentage >= 50){
        printf("Grade: D grade\n");
    }else if (percentage >= 40){
        printf("Grade: E grade\n");
    }else if (percentage >= 35){
        printf("Grade: F grade\n");
    }else {
        printf("Grade: Fail.\n");
    }
    return 0;
}
