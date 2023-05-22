#include <stdio.h>
typedef struct
{
    int roll;
    char name[30];
    float gpa;
}student;
int main()
{
    student s;
    scanf("%s%d%f",s.name,&s.roll,&s.gpa);
    printf("Name = %s\nRoll = %d\nGPA = %.2f\n", s.name, s.roll, s.gpa);
    return 0;
}