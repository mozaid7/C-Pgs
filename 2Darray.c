#include<stdio.h>

int main(){
    int marks[2][3];
    marks [0][0]= 90;
    marks [0][1]= 34;
    marks [0][2]= 45;

    marks [1][0]= 35;
    marks [1][1]= 67;
    marks [1][2]= 89;

    printf("%d", marks[0][1]);
    return 0;
}