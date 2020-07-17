#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,p,q,ans=0;
        cin>>n>>p;
        while(n--)
        {
            cin>>q;
            if(q>p)
                ans=ans+q-p;

        }
        cout<<ans<<endl;


    }





}
