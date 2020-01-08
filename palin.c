#include<stdio.h>
int main()
{ 
  int n, a, sum =0, m;

  printf("enter the number :");
  scanf("%d",&n);
  m=n;
  while(n>0)
   {
        a=n%10;
        sum=sum*10+a;
        n=n/10;
   }  
   n=m;
   if(n==sum)
   printf( " palindron number");
   else
   printf("not a palindrom number");
   
}  