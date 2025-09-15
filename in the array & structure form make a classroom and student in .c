#include <stdio.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    int rollNumber ;
    char name[NAME_LENGTH];
} Student;
int main() {
    Student classroom1[MAX_STUDENTS];
    
    int class1;
    
    printf("Enter number of students in Classroom 1: ");
    scanf("%d", &class1);
    
    printf("\n--- Enter details of Classroom 1 Student --- \n");
    for (int i = 0; i < class1; i++) {
        printf("\n Student %d Name: ", i + 1);
        scanf(" %s", classroom1[i].name); 
        
        printf("Student %d Roll Number: ", i + 1);
        scanf("%d", &classroom1[i].rollNumber);
    }
    
    printf("\n===== Classroom 1 Students ======\n");
    for (int i = 0; i < class1; i++) {
        printf("\n Name: %s" , classroom1[i].name);
        printf("\n Roll Number: %d\n" , classroom1[i].rollNumber);
    }
    
        return 0;
}
