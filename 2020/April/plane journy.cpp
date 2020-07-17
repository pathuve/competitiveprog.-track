#include<iostream>
#include<algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    long long int n,m,sum=1;
    cin>>n>>m;
    long long int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    if(a[n-1]>b[m-1])
    {
        cout<<"-1";
    }
    else
    {
      for(int i=0;i<n;i++)
      {

      }

    }
}
