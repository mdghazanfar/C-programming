#include<stdio.h>
int main()
{

    int n,a,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        sum=sum*10+a;
        n=n/10;

    }


 printf("reverse of the number id %d\n",sum);


}