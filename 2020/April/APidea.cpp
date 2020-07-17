#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int  sum,n,a,cd;//cd-common difference
        cin>>sum>>n>>a;
        cd=(((2*sum)/n)-2*a)/(n-1);//calculating common difference by A.P sum upto n formulae
        for(int i=0;i<n;i++)
        {
            cout<<a<<" ";
            a=a+cd;
        }



    }


}
