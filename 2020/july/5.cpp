#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        long long int sum=0;
        cin>>n;
        long long int a[n],b[n],ctr;
        unordered_map<long long int,long long int>ua,ub;
        vector<long long int>va,vb;
        cin>>ctr;
        a[0]=ctr;
        ua[a[0]]++;
        long long int mini=a[0];
        for(long long int i=1;i<n;i++)
            {cin>>a[i];
             ua[a[i]]++;
             min(mini,a[i]);
             ctr=ctr^a[i];
            }
        for(long long int i=0;i<n;i++)
            {cin>>b[i];
             ub[b[i]]++;
             min(mini,a[i]);
             ctr=ctr^b[i];
            }
        if(ctr!=0)
            sum=-1;
        else{
        //elements of a not in b
        for(auto x:ua)
        {
            if(x.second>ub[x.first])
               {
                   for(long long int i=0;i<(x.second-ub[x.first]);i++)
                    va.push_back(x.first);
               }

        }
        //elements of b not in a
        for(auto x:ub)
        {
            if(x.second>ua[x.first])
               {
                 //  cout<<"came inside as"<<" "<<"x.second>ua[x.first]"<<" "<<x.second<<" "<<ua[x.first]<<endl;
                   for(int i=0;i<(x.second-ua[x.first]);i++)
                    vb.push_back(x.first);
               }

        }
        sort(va.begin(), va.end());
        sort(vb.begin(), vb.end(), greater <>());

        for(long long int i=0;i<va.size();i=i+2)
         {

            sum=sum+min(min(va[i],vb[i],2*mini);

         }





        }
        cout<<sum<<endl;
    }




}
