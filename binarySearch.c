#include<stdio.h>
int binarySearch(int array[], int x, int l, int r) {
    while(l<=r) {
        int m = l+(r-l)/2;
        if(array[m] == x) {
            return m;
        } else if(array[m] < x) {
            l=m+1;
        } else {
            r=m-1;
        }
        return -1;
    }
    
}

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,12,14,16};
    int n = sizeof(array)/sizeof(array[0]);
    int x, result;
    //printf("%d", n);
    printf("Enter the element to be found: ");
    scanf("%d", &x);
    result = binarySearch(array, x, 0, n-1);
    if(result == -1) {
        printf("Element not found");
    } else {
        printf("Element is found at %d", result);
    }

    return 0;
}