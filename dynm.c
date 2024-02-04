#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));

    ptr[0]=1;
    ptr[1]=23;
    ptr[2]=34;
    ptr[3]=45;
    ptr[4]=56;

for(int i=0; i<5; i++){
    printf("%d\n", ptr[i]);
}

}