#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(long long int l=1;l<=t;l++)
    {
        long long int n,ctr=0,inc=0,dec=0;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        for(long long int i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
             {
                 inc++;
             }
            else if(arr[i]>arr[i+1])
             {
                 dec++;
             }
            if(inc>=3)
            {
                ctr++;
                inc=1;
            }
            if(dec>=3)
            {
                ctr++;
                dec=1;

            }
        }
    cout<<"Case #"<<l<<":"<<" "<<ctr-1<<endl;


    }


}
