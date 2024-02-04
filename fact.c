#include<stdio.h>

int fact(int n);

int main(){
    printf("The factorial till number n is : %d", fact(5));
    return 0;
}

// Recursive Function
int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1 = fact(n-1); //sum of 1 to n
    int factN = factNm1 * n;
    return factN;

}