#include<stdio.h>
#include<string.h>

int countLength(char arr[]);
int main() {
    char name[100];
    fgets(name,100,stdin);
    int length = strlen(name);
    printf("Your length is : %d", length);
    return 0;

}
int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;

    }
    return count-1;
}