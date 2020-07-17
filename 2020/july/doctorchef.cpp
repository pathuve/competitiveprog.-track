#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,v,ctr=0;
        vector<long long int>v1,v2;
        cin>>n>>v;
        long long int arr[n];
        for(int i=0;i<n;i++)
           {
               cin>>arr[i];
               if(arr[i]>=v)
                v1.push_back(arr[i]);
               else
                v2.push_back(arr[i]);

           }
        sort(v1.begin(),v1.end());
        for(auto x:v1)
        {

            if(x<=v)
                {ctr++;
                 v=x*2;
                }
            else
            {

               while(x>v)
                {

                  ctr++;
                 // cout<<"v becomes: "<<v<<" "<<"ctr is"<<ctr<<" "<<"for a[i]"<<x<<endl;
                  v=v*2;
                }
                v=x*2;
                ctr++;
            }
          //cout<<"for i="<<x<<" "<<ctr<<endl;
        }
        cout<<ctr+v2.size()<<endl;

    }


}
