#include<iostream>
#include<stdio.h>
int main()
{



auto num = 71;
auto Res=0;
while (num > 0) {
  current = num & 1;
  Res = Res + current;
  num = (num - current) / 2;
}
cout<<Res;
}
