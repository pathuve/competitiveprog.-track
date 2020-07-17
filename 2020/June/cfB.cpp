#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,e=0,o=0;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(i%2==1&&arr[i]%2==0)
             e++;
            else if(i%2==0&&arr[i]%2==1)
             o++;
        }
        if(e==o)
            cout<<e<<endl;
        else
            cout<<"-1"<<endl;



    }





}
