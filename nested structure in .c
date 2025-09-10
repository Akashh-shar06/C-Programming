#include <stdio.h>

#define NAME_LENGTH 50

// Define the inner structure using typedef

typedef struct {
    int day;
    int month;
    int year;
} Date;

// Define the outer structure using typedef
typedef struct {
    int rollNo;
    char name[NAME_LENGTH];
    Date dob;
} Student;

int main() {
    Student s1;

    // Input values from user
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNo);
    getchar();  // Consume newline character left by scanf

    printf("Enter Name: ");
    scanf("%s", &s1.name);
    getchar();

    printf("\nEnter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    // Output
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);  // fgets includes newline
    printf("Date of Birth: %02d/%02d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
