#include<iostream>
using namespace std;
int main()
{

    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,ctr=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=ctr+1;j<=ctr+n;j++)
                {
                  cout<<j<<" ";
                }
                cout<<endl;
                ctr=ctr+n;
            }
            else if(i%2==1)
            {

                long long int temp=ctr;
                for(int j=temp+n;j>ctr;j--)
                    cout<<j<<" ";
                cout<<endl;
                ctr=ctr+n;
            }



        }







    }



}
