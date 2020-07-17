#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  long long int x,n;
  cin>>x>>n;
  if(n==2)
  {
      cout<<(x%10)*(x%10);
  }
  else if(n==3)
  {
      long long int l=x%10;
      cout<<int(pow(l,6))%10;
  }
  else if(n==4)
  {
      long long int l=x%10;
      cout<<int(pow(l,4))%10;
  }
  else if(n>4)
  cout<<"1";



}
