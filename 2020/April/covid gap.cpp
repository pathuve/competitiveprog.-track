#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,differece=0,first=-1,ctr=1;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1&&first==-1)
               {

               first=i;}
            else if(arr[i]==1&&first!=-1)
            {
                if(i-first>=6)
                    {first=i;}
                else
                   {

                    ctr=0;}

            }
        }
       if(ctr==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;



    }



}
