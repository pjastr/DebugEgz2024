
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[3][4] = {{-2,1,-2,1},{3,-2,4,-2},{-4,1,2,0}};
  int a=tab[1][-3]; //a=
  int b=tab[2][-2]; //a=  ,b=
  a=b++; //a=  ,b=
  b=a*4;  //a=  ,b=
  a=(b+=3)-2;  //a=  ,b=
  b=**((tab)+2); //a=  ,b=
  ++a; //a=  ,b=
  return 0;
}
