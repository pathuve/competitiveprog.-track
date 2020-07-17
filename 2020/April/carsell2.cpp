#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long int t;
    cin>>t;
    while(t--)
{

    long long int n,sum=0,c=0;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n-1);
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]-c>=0)
        {
            sum=sum+arr[i]-c;
        }
        c++;
    }
    cout<<sum<<endl;

}
}
