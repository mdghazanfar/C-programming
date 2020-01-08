#include<stdio.h>
int main()
{
    int a;
    printf("Enter the marks of the student \n");
    scanf("%d",&a);
    switch(a/10)
    {
        case 10:
        case 9:
        printf("The grade is O");
        break;
        case 8:
        printf("The grade is B");
        break;
        case 7:
        printf("The grade is c");
        break;
        case 6:
        printf("The grade is D");
        break;
        default:
        printf("Invalid choice");
    }
}