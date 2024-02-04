#include<stdio.h>

int main() {
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d", x>9 && x<100);
    return 0;
}