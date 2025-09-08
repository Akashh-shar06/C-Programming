#include <stdio.h>

struct Student {
    int RollNo, english, hindi, maths, biology, science, total;
    char Name[15]; 
    float percentage;
};

int main() {
    struct Student s1;
    
    printf("Enter the name: ");
    scanf("%s", s1.Name); 
    
    printf("Enter the RollNo: ");
    scanf("%d", &s1.RollNo);
    
    printf("Enter the English marks: ");
    scanf("%d", &s1.english);
    
    printf("Enter the Hindi marks: ");
    scanf("%d", &s1.hindi);
    
    printf("Enter the Maths marks: ");
    scanf("%d", &s1.maths);
    
    printf("Enter the Biology marks: ");
    scanf("%d", &s1.biology);
    
    printf("Enter the Science marks: ");
    scanf("%d", &s1.science);
  
    s1.total = s1.english + s1.hindi + s1.maths + s1.biology + s1.science;
    s1.percentage = (s1.total / 500.0) * 100;

    printf("\n--- Student Report ---\n");
    printf("Name       : %s\n", s1.Name);
    printf("Roll No    : %d\n", s1.RollNo);
    printf("Total Marks: %d\n", s1.total);
    printf("Percentage : %.2f%%\n", s1.percentage);

    if (s1.percentage >= 90) {
        printf("Grade: O grade\n");
    } else if (s1.percentage >= 80) {
        printf("Grade: A grade\n");
    } else if (s1.percentage >= 70) {
        printf("Grade: B grade\n");
    } else if (s1.percentage >= 60) {
        printf("Grade: C grade\n");
    } else if (s1.percentage >= 50) {
        printf("Grade: D grade\n");
    } else if (s1.percentage >= 40) {
        printf("Grade: E grade\n");
    } else if (s1.percentage >= 35) {
        printf("Grade: F grade\n");
    } else {
        printf("Grade: Fail\n");
    }
    
    return 0;
}
