#include<bits/stdc++.h>
using namespace std;
long long int firstDigit(int n)
{
    while (n >= 10)
        n /= 10;
    return n;
}

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n],brr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //counting bit score
   long long int  maxi=0,mini=11;
    for(int i=0;i<n;i++)
    {
        maxi=0,mini=11;
        long long int r=arr[i];
        while(r)
        {
            long long int m=r%10;
            if(m>=maxi)
                maxi=m;
            if(m<=mini)
                mini=m;
            r=r/10;
        }
       // cout<<"for "<<arr[i]<<"mini "<<mini<<"maxi"<<maxi;
        brr[i]=firstDigit((maxi*11+mini*7)%100);
    }
   for(int i=0;i<n;i++)
    {

        cout<<brr[i]<<" ";


    }
    unordered_map<long long int ,long long int>ue,uo,uc;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
           ue[brr[i]]++;
        else if(i%2==1)
           uo[brr[i]]++;
    }
    long long int ct=0;
    for(auto x:ue)
    {
        if(x.second==2){
                //cout<<"adding for"<<" "<<x.first<<ct+1<<endl;
            uc[x.first]++;
            ct++;
            }
       else if(x.second>2){
            //cout<<"adding for"<<" "<<x.first<<ct+2<<endl;
             uc[x.first]++;
             uc[x.first]++;
            ct=ct+2;
            }

    }
    for(auto x:uo)
    {
        if(x.second==2){
            if(uc[x.first]==0)
              ct++;
            else if(uc[x.first]==1)
              ct++;
            else
              ct=ct+0;



            }
        else if(x.second>2){
            //cout<<"adding for"<<" "<<x.first<<2-uc[x.first]<<endl;
            ct=ct+2-uc[x.first];
            }

    }


    cout<<ct<<endl;






}
