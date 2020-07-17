#include<bits/stdc++.h>
using namespace std;
long long int highestPowerof2(long long int n)
{
   long long int p = (int)log2(n);
   return (long long int)pow(2, p);
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,ctr=0;
        cin>>n>>k;
        ctr=(2*(k+1))%n;
        if(ctr==0)
        {
            ctr=n;
        }
        cout<<"ctr:"<<ctr<<endl;
        long long int power;
        power=highestPowerof2(n);
        cout<<"power"<<power<<endl;
        long long int ans,atone;
        atone=2*(n-power);
        ans=atone+ctr-1;
        ans=ans%n;
        if(ans==0)
            cout<<n<<endl;
        else
            cout<<ans<<endl;

    }



}
