#include<stdio.h>
int main()
{
    int a;
    printf("enter a no. \n");
    scanf("%d",&a);
    if(a%4==0 || a%100==0 || a%400==0)
            printf("\n Leap year \n %d",a);
            else
            printf("\n Not A Leap year \n %d",a);
        return 0;
    }
    