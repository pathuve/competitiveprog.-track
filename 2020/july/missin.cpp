#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x1,y1;
        cin>>n;
        n=4*n-1;
        //unordered_map<long long int ,long long int> ux;
        //unordered_map<long long int ,long long int> uy;
        long long int x,y;
        cin>>x>>y;
        x1=x;
        y1=y;
        n--;
        while(n--)
        {

           cin>>x>>y;
           //ux[x]++;
           //uy[y]++;
           x1=x1^x;
           y1=y1^y;
        }
        /*for(auto k:ux)
        {
            if(k.second%2==1)
                cout<<k.first<<" ";

        }
        for(auto l:uy)
        {
            if(l.second%2==1)
                cout<<l.first<<endl;

        }*/
        cout<<x1<<" "<<y1<<endl;
    }


}
