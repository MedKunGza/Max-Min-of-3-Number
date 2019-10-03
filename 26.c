#include <stdio.h>

int main() 
{
  int x,y,z;
  printf("Input Number 1 = ");
  scanf("%d",&x);
  printf("Input Number 2 = ");
  scanf("%d",&y);
  printf("Input Number 3 = ");
  scanf("%d",&z); 
  if(x==y & y==z)
  {
    printf("Max and Min is %d",z);
  }
  else if(x<y & x<z)
  {
    printf("Min is %d\n",x);
    if(y<z)
    {
    printf("Max is %d",z);
    }
    else
    {
    printf("Max is %d",y);
    }
  }
  else if(y<x & y<z)
  {
    printf("Min is %d\n",y);
    if(x<z)
    {
    printf("Max is %d",z);
    }
    else
    {
    printf("Max is %d",x);
    }
  }
  else if(z<y & z<x)
  {
    printf("Min is %d\n",z);
    if(y<x)
    {
    printf("Max is %d",x);
    }
    else
    {
    printf("Max is %d",y);
    }
  }
  return 0;
}