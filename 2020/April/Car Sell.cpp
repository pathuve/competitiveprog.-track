#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,c=0,temp,sum=0,ctr=0;
        cin>>n;
        int arr[100000];
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp!=0)
            {
                arr[c]=temp;
                c++;
            }
        }
        sort(arr,arr+c);
        for(int i=c;i>=0;i--)
        {if(arr[i]-ctr>=0)
            sum=sum+arr[i]-ctr;
         ctr++;
        }
        cout<<sum<<endl;

    }

}
