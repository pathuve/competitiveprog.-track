#include<iostream>
#include<algorithm>
#include <unordered_map>
#define ll long long int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n],h[m],temp[n];
    for(int i=0;i<n;i++)
        {cin>>arr[i];

        }
    for(int i=0;i<m;i++)
        cin>>h[i];
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,f=0;
        cin>>a>>b;
        unordered_map<int, int> umap;
        a=a-1;
        b=b-1;
        for(int i=a;i<=b;i++)
        {
            umap[arr[i]]++;
            if(umap[arr[i]]>h[arr[i]-1])
            {
                break;
            }
        }
        for (auto x : umap)
        {
           if(h[x.first-1]!=x.second)
           {
               f=-1;
               break;
           }
        }
       if(f==-1)
       {
           cout<<"0"<<endl;
       }
       else
        cout<<"1"<<endl;


    }
}
