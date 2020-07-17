#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,product=1,ctr=0;
        cin>>n;
       long long  int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%4==0)
            {
                arr[i]=0;
            }
            else if(arr[i]%4==2)
            {
                arr[i]=-1;
            }
            else
            {
                arr[i]=1;
            }

        }
        for(int i=0;i<n-1;i++)
        {   product=arr[i];
             if(product>=0)
             {
               ctr++;
               cout<<"single"<<arr[i]<<endl;
             }

            for(int j=i+1;j<n;j++)
            {
                product=product*arr[j];


                if(product>=0)
                {
                    ctr++;
                    cout<<"from"<<arr[i]<<":"<<arr[j]<<"with product:"<<product<<endl;


                }




            }
        }
        if(arr[n-1]>=0)
        {
           ctr++;
           cout<<"single"<<arr[n-1];
        }

        cout<<ctr<<endl;
    }
}
