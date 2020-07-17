#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n][n],mi,mj,mini=100000000;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]<mini)
            {
                mini=arr[i][j];
                mi=i;
                mj=j;
            }
        }
    }
    cout<<(n*n)<<endl<<mi+1<<" "<<mj+1;





}
