#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[3][4] = {{5,-2,-1,4},{6,-3,4,-4},{0,3,-8,1}};
  int a=tab[1][-3]; //a=
  int b=tab[2][-2]; //a=  ,b=
  a=b++; //a=  ,b=
  b-=a*3;  //a=  ,b=
  a+=(b+=3)-7;  //a=  ,b=
  b=**((tab)+2); //a=  ,b=
  ++a; //a=  ,b=
  return 0;
}
