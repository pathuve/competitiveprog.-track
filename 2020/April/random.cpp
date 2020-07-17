#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,m,k;
        cin>>n>>m>>k;
        int arr[n][k];
        for(int i=0;i<n;i++)
            for(int j=0;j<k;j++)
        {
            cin>>arr[i][j];
        }
       int j=0;
        for(int i=0;i<n;i++)
           {
               cout<<arr[i][j]<<" ";
              if(j<k-1)
               j++;

           }



    }

}
