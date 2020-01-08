#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,sum=1;
    printf("enter the no. \n");
    printf("enter the power value \n");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        if(i%2==0)
            sum=sum+pow(a,i);
            else
             sum=sum-pow(a,i);
            }
            printf("%d",sum);
            return 0;
            
        }