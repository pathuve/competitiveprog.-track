#include<set>
#include<iostream>
#include <utility>
#include <bitset>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,m=0;
        cin>>n>>k;
        long long int arr[n];
        for(int i=0;i<n;i++)
            {cin>>arr[i];
             if(arr[i]>=m)
                m=arr[i];
            }
        int bitcount=(int)log2(number)+1;

   }
}






