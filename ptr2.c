#include<stdio.h>

int main() {
    int number = 4;
    square(number);
    printf("Number = %d\n", number);

    _square(&number);
    printf("Number = %d\n", number);
    return 0;

}
void square(int n) {
    n = n*n;
    printf("Square = %d\n", n);
}

void _square(int* n){
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}