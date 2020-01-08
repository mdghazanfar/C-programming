#include<stdio.h>
int main()
{ 
  int n, a, b,sum =0, m;

  printf("enter the number :");
  scanf("%d",&n);
  m=n;
  while(n>0)
   { a=n%10;
   b=a*a*a;
   sum=sum +b;
   n=n/10;

   }  
   n=m;
   if(n==sum)
   printf( " armstrong  number");
   else
   printf("not an armstrong munber");
   
}