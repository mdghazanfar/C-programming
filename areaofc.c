#include<stdio.h>
int main()
{
    int rad;
    float Pi=3.14,ci, area;
    printf("enter the rad of the circle ");
    scanf("%d",&rad);
    area = Pi *rad*rad;
    printf("area of the cricle %f", area);

    ci=2*Pi*rad;
    printf("circunferance of the circle %f",ci);

  return  0;
  

}