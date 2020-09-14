#include <bits/stdc++.h>
using namespace std;
long long int ans(long double n)
{
	long double sumn=(n*(n+1))/2;
	long double reqsum=sumn/2;
	long double ans=(-1+sqrt(-1+8*reqsum))/2;
	return(floor(ans));
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
	long long int n;
    cin>>n;

    long long int arr[n+1];
    for(long long int i=1;i<=n;i++)
        arr[i]=i;
    long long int c=0;
    if(int(n*(n+1))%4==0)
    {
       for(long long int i=1;i<n;i++)
       {
           for(long long int j=i+1;j<=n;j++)
           {
              swap(arr[i],arr[j]);
              long long int sum=0;
              for(long long int k=1;k<=n;k++)
               {
                   sum=sum+arr[k];
                   if(sum==(n*(n+1))/4){
                    c++;
                    cout<<"i:"<<i<<"j:"<<j<<"pivot"<<k<<endl;
                    break;

                   }

               }

            swap(arr[i],arr[j]);


           }

       }
        cout<<c<<endl;
    }
    else
     cout<<"0"<<endl;
    }
	return 0;
}

