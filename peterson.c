#include<stdio.h>
int main()
{
    int n, sum=0, a, i,  m, fact;

   printf("enter the number ");
   scanf("%d", &n);

   m=n;
    
    while (n > 0)
    {
        a = n % 10; 
        fact=1;

        for(i=a; i>=1; i--)
        
        {
            fact = fact * i ;
        
        }
        sum = sum+ fact;

        n = n / 10;         
    } 

   n=m;
   if(n==sum)
   printf("peterson number");
   else
   printf("not a peterson number");

    
   
   

}