#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    long long int r=0,m=0,ans=0;
    for(int i=0;i<b.length();i++)
    {
        if(b[i]=='r')
            r++;
        else if(b[i]=='m')
            m++;

    }

    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='r'&&r>0)
            r--;
        else if(a[i]=='m'&&m>0)
            m--;
        else
        {
            ans=a.length()-i;
            break;
        }

    }

     cout<<ans<<endl;

}
