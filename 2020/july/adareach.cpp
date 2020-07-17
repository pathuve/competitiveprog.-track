#include<iostream>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
      long long int k,ctr=0;
      cin>>k;
      for(int i=1;i<=8;i++)
      {
          for(int j=1;j<=8;j++)
          {
              if(j==1&&i==1)
              {
                  cout<<"O";
                  ctr++;
              }
              else if(ctr<k)
              {
                  cout<<".";
                  ctr++;
              }
              else
              {
                 cout<<"X";
                  ctr++;
              }

          }
          cout<<endl;
      }


  }



}
