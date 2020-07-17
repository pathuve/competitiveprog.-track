#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,ctr3=0,ctr2=0,r2,r3;
        cin>>n;
        r2=n;
        r3=n;
        while(r3)
        {
            if(r3%3==0)
            {r3=r3/3;
             ctr3++;
            }
            else
             break;
        }
        while(r2)
        {
            if(r2%2==0)
            {r2=r2/2;
             ctr2++;
            }
            else
             break;
        }
        long long int m=pow(2,ctr2)*pow(3,ctr3);
        //cout<<m<<endl;
        if(n==1)
            cout<<"0"<<endl;
        else if(ctr2==0&&(pow(3,ctr3)==n))
            cout<<(2)*(ctr3)<<endl;
        else if(ctr2>ctr3||ctr3==0||m!=n)
            cout<<-1<<endl;
        else
        {
            cout<<(ctr3-ctr2)+ctr3<<endl;
        }
    }
}
