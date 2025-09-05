// Online C compiler to run C program online
#include <stdio.h>

struct Student{
    int RollNo , english , hindi , maths , biology , science, total;
    char Name[10];
    float Marks , percentage;
};
int main() {
 
    struct Student s1;
    
    printf("Enter the name : ");
    scanf("%s" , &s1.Name);
    
    printf("Enter the RollNo : ");
    scanf("%d", &s1.RollNo);
    
    printf("\nEnter the english marks : ");
    scanf("%d" , &s1.english);
    
    printf("Enter the hindi marks : ");
    scanf("%d" , &s1.hindi);
    
    printf("Enter the maths marks : ");
    scanf("%d" , &s1.maths);
    
    printf("Enter the biology marks : ");
    scanf("%d" , &s1.biology);
    
    printf("Enter the science marks : ");
    scanf("%d" , &s1.science);
    
    printf("\nName = %s" , s1.Name);
    printf("\nRollNo = %d", s1.RollNo);
    
    s1.total = s1.english + s1.hindi + s1.maths + s1.biology + s1.science;
    s1.percentage = (s1.total / 500.0) * 100;
    
    printf("total marks:%d\n" , s1.total);
    printf("percentage:%.2f%%\n" , s1.percentage);
    
    printf("Name = %s" , s1.Name);
    // printf("Enter the Marks : ");
    // scanf("%f" , &s1.Marks);
    

    return 0;
}
