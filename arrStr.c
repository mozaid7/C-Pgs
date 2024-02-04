#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student ece[100];
    ece[0].roll = 98;
    ece[0].cgpa = 6.5;
    strcpy(ece[0].name,"Carlos");

    printf("Student Name is : %s\n", ece[0].name);
    printf("Student CGPA is : %f\n", ece[0].cgpa);
    printf("Student RollNo. is : %d\n", ece[0].roll);
    return 0;

}