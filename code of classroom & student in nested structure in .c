#include <stdio.h>

#define NAME_LENGTH 50
#define MAX_STUDENT 5

typedef struct {
    int rollNo;
    char name[NAME_LENGTH];
    int age;
} Student;

typedef struct {
    char className[20];
    int totalStudent;
    Student students[MAX_STUDENT];
} Classroom;

int main() {
    Classroom c1;
    
    printf("Enter the classroom Name : ");
    scanf("%s" , &c1.className);
    
    printf("Enter the number of Student : ");
    scanf("%d" , &c1.totalStudent);
    
    for (int i = 0; i < c1.totalStudent; i++) {
        printf("\nEnter the details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", c1.students[i].name);

         printf("Roll No: ");
        scanf("%d", &c1.students[i].rollNo);
        
        printf("Age: ");
        scanf("%d", &c1.students[i].age);
    }
        printf("\n------ Classroom Details ------\n");
        printf("Classroom Name: %s\n", c1.className);
        printf("Total Students: %d\n", c1.totalStudent);

        for (int i = 0; i < c1.totalStudent; i++) {
            printf(" Name  : %s\n", c1.students[i].name);
                printf(" Roll No  : %d\n", c1.students[i].rollNo);
                    printf(" Age  : %d\n", c1.students[i].age);
                        printf("\n");
    }  
    return 0;
} 
