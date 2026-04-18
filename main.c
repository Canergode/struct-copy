#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Define student info struct inside main
    struct StudentInfo
    {
        int number;
        char firstName[10];
        char lastName[10];
        int age;
    };
    struct StudentInfo student1,student2;

    // Initialize student1
    student1.number=272;
    strcpy(student1.firstName,"John");
    strcpy(student1.lastName,"Doe");
    student1.age=19;

    // Copy student1 into student2
    student2=student1;

    // Print both students
    printf("Student 1:%d %s %s %d\n",student1.number,student1.firstName,student1.lastName,student1.age);
    printf("Student 2:%d %s %s %d\n",student2.number,student2.firstName,student2.lastName,student2.age);

    return 0;
}

