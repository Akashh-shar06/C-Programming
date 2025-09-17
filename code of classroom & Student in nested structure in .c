#include <stdio.h>

#define NAME_LENGTH 50
#define MAX_STUDENT 100
#define MAX_CLASSROOM 10 

  typedef struct {
    int rollNo;
    char name[NAME_LENGTH];
    int age;
} Student;

typedef struct {
    char className[20];
    char classTeacher[NAME_LENGTH];
} ClassroomInfo;

typedef struct {
    ClassroomInfo info;           
    int totalStudent;
    Student students[MAX_STUDENT]; 
} Classroom;

int main() {
    Classroom classrooms[MAX_CLASSROOM];
    int totalClassrooms;

    printf("Enter number of Classrooms (Max %d): ", MAX_CLASSROOM);
    scanf("%d", &totalClassrooms);

    for (int c = 0; c < totalClassrooms; c++) {
        printf("\n===== Enter details for Classroom %d =====\n", c + 1);

        printf("Enter Classroom Name: ");
        scanf("%s", classrooms[c].info.className);

        printf("Enter Classroom Teacher: ");
        scanf("%s", classrooms[c].info.classTeacher);

        printf("Enter number of Students (Max %d): ", MAX_STUDENT);
        scanf("%d", &classrooms[c].totalStudent);

        for (int i = 0; i < classrooms[c].totalStudent; i++) {
            printf("\n--- Enter details of Student %d ---\n", i + 1);

            printf("Roll No: ");
            scanf("%d", &classrooms[c].students[i].rollNo);

            printf("Name: ");
            scanf("%s", classrooms[c].students[i].name);

            printf("Age: ");
            scanf("%d", &classrooms[c].students[i].age);
        }
    }

    printf("\n\n========== All Classroom Details ==========\n");

    for (int c = 0; c < totalClassrooms; c++) {
        printf("\n--- Classroom %d ---\n", c + 1);
        printf("Classroom Name   : %s\n", classrooms[c].info.className);
        printf("Classroom Teacher: %s\n", classrooms[c].info.classTeacher);
        printf("Total Students   : %d\n", classrooms[c].totalStudent);

        for (int i = 0; i < classrooms[c].totalStudent; i++) {
            printf("\nStudent %d:\n", i + 1);
            printf(" Roll No : %d\n", classrooms[c].students[i].rollNo);
            printf(" Name    : %s\n", classrooms[c].students[i].name);
            printf(" Age     : %d\n", classrooms[c].students[i].age);
        }
    }

    return 0;
}
