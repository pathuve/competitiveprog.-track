#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,rc=0,position=0;
        cin>>n;
        int arr[100000];
         vector<int>arr1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
            {
              arr1.push_back(arr[i]);
              position++;
            }


        }
         sort(arr1.begin(), arr1.end());
        for(int i=0;i<n;i++)
        {
            if(arr1[i]-i>0)
            sum=sum+arr[i]-i;

        }

        cout<<(sum)%(1000000007) ;




    }
}
