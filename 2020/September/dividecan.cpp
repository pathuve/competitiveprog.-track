#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k;
    cin>>k;
    long long int t;
    cin>>t;
    while(t--)
{
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
            arr[i]=0;
        if(k==1)
    {
        if(n%2==0)
          {
            if(n*(n-1)%4==0)
            {
               long int ctr=1;
                for(long long int i=0;i<n/2;i++)
                {
                    arr[i]=ctr;
                    arr[n-i-1]=ctr;
                    if(ctr==1)
                        ctr=0;
                    else
                        ctr=1;
                }
               cout<<0<<endl;
               for(x:arr)
                cout<<x;
               cout<<endl;
            }
            else
            {
              long int ctr=1;
                for(long long int i=0;i<n/2;i++)
                {
                    arr[i]=ctr;
                    arr[n-i-1]=ctr;
                    if(ctr==1)
                        ctr=0;
                    else
                        ctr=1;
                }
                arr[n/2-1]=0;
                arr[n/2]=1;
               cout<<1<<endl;
               for(x:arr)
                cout<<x;
               cout<<endl;
            }
          }
        else
        {
            if(n*(n+1)%4==0)
            {
                long long int k=(n+1)/4;
                arr[n-1]=1;
                for(long long int i=0;i<k-1;i++)
                {
                    arr[i]=1;
                    arr[n-i-2]=1;
                }
                cout<<0<<endl;
               for(x:arr)
                cout<<x;
               cout<<endl;
            }
            else
            {
                long int ctr=1;
                arr[0]=1;
                for(long long int i=1;i<n/2;i++)
                {
                    arr[i]=ctr;
                    arr[n-i]=ctr;
                    if(ctr==1)
                        ctr=0;
                    else
                        ctr=1;
                }
               cout<<1<<endl;
               for(x:arr)
                cout<<x;
               cout<<endl;
            }

        }

    }
}
}
