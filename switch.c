#include<stdio.h>
int main() {
    int day;
    printf("Enter Day No : ");
    scanf("%d", &day);
    // 1-->Mon
    // 2-->Tue
    // 3-->Wed
    // 4-->Thu
    // 5-->Fri
    // 6-->Sat
    // 7-->Sun
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");          
        break;
    case 3:
        printf("Wednesday");
        break;

    default:
    printf("Enter valid input");
        break;
    }

}