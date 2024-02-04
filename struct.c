#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 98;
    s1.cgpa = 6.5;
    strcpy(s1.name,"Carlos");

    printf("Student Name is : %s\n", s1.name);
    printf("Student CGPA is : %f\n", s1.cgpa);
    printf("Student RollNo. is : %d\n", s1.roll);

    return 0;
}