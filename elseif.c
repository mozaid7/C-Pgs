#include<stdio.h>
int main() {
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if (age>=18)
    {
        printf("The person can vote");
    } else if (age>=10 && age<18)
    {
        printf("The person is a teenager");
    } else {
        printf("The person is a Kid");
    }
    
}