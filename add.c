#include<stdio.h>
int multi (  int a , int b)
          { 
              return (a*b);

          }  
   
      int main() 
  
   {
      int a,b;
      printf("enter the two number");
      scanf("%d%d",&a,&b);
      int result=multi( a,b);
      printf("the result is %d",result);

    }