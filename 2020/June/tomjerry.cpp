#include<bits/stdc++.h>
using namespace std;
long long int highestPowerof2(long long int n)
{
    long long int ctr=0;
   while(n%2==0)
   {
       ctr++;
       n=n/2;
   }
   return(ctr);
}
int main()
{

    long long int t;
    cin>>t;
    while(t--)
        {
            long long int js;
            cin>>js;
            long long int powr=highestPowerof2(js);
            long long int a=pow(2,powr+1);
            cout<<int(js/a)<<endl;
        }


}
