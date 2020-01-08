#include<stdio.h>
int main()
{
    int num,num_cp,num_sq,lastdigit;
    printf("enter the no \n");
    scanf("/d",&num);
    num_cp=num;
    num_sq=num*num;
    while(num_sq>0)
    {
        lastdigit=num_sq%10;
    if(lastdigit==num_cp)
        printf("Automorphic no. %d",num);
    else
     printf("Not an Automorphic no. %d",num);   
    } 
    return 0;
    }