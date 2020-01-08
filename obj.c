#include<stdio.h>
int main()
{ 
  int num, i, fact=1;

  printf("enter the factorial numbar");
  scanf("%d",&num);
  for(i=num; i>=1; i--)
  {
   fact=fact*i;
  }
  printf("factorial: %d",fact);

}


