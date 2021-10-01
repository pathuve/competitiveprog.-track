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
        long long int a[n],b[n],ctr=0;
        unordered_map<long long int,long long int>ua,ub,uc;
        vector<long long int>va,vb;
        long long int mini;
        cin>>a[0];
        mini=a[0];
        for(long long int i=1;i<n;i++)
            {cin>>a[i];
            min(min,a[i]);
             a[i]--
             uc[a[i]]++;
            }
        for(long long int i=0;i<n;i++)
            {cin>>b[i];
            min(mini,b[i]);
             ub[b[i]]++;
             uc[b[i]]++;
            }
        for(auto x:uc)
        {
            if(x.second%2!=0){
                ctr=-1;
                //cout<<"came for:"<<x.first;
                }
        }
        if(ctr==-1)
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
                    va.push_back(x.first);
               }

        }
        sort(va.begin(), va.end());


        for(long long int i=0;i<(va.size()/2);i=i+2)
         {


            sum=sum+min(va[i],mini);

         }





        }
        if(sum==-1)
            cout<<"-1"<<endl;
        else
        cout<<sum<<endl;
    }




}

