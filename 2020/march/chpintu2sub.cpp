#include<iostream>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n,m=2;
        cin>>n>>m;
        int arr1[n],arr2[n],sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
            if(arr1[i]==1)
            {
                sum1++;

            }
          else if(arr1[i]==2)
            {
                sum2++;

            }

        }
        if(sum1==0)
        {
            cout<<sum2<<endl;
        }
       else if(sum2==0)
        {
            cout<<sum1<<endl;
        }
       else if(sum1>sum2)
       {
           cout<<sum2;

       }
       else
       {
           cout<<sum1;
       }

    }

}
