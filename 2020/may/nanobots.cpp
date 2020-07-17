#include<iostream>
using namespace std;
int main()
{
    long long int n,p,col,ctr=0,row;
    cin>>n>>p;
    long long int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    long long int k;
    cin>>k;
    long long int sum,ans=0;
    while(ctr!=n*n)
    {
    for(long long int i=0;i<n&&ctr<n*n;i++)
    {
        ans++;
        col=0;
        sum=0;
        while(sum+arr[i][col]<=p&&ctr<n*n)
      {
            sum=sum+arr[i][col];
            if(arr[i][col]!=0)
            {

                arr[i][col]=0;
                ctr++;
            }
        if(col<n)
            col++;
        else if(col==n)
                break;

      }

    }

    for(long long int j=n-1;j>=0&&ctr<n*n;j--)
    {

        ans++;
        row=0;
        sum=0;
        while(sum+arr[row][j]<=p&&ctr<n*n)
        {

          sum=sum+arr[row][j];
          if(arr[row][j]!=0)
            {

                arr[row][j]=0;
                ctr++;
            }
        if(row<n)
            row++;
        else if(row==n)
                break;
        }

    }
}
cout<<ans<<endl;
while(ans>0)
    {
    for(int i=1;i<=n;i++)
           {
              if(ans>0)
       {
           cout<<"L "<<i<<endl;
           ans--;
       }
           }
    for(int j=n;j>=1;j--)
    {
       if(ans>0)
       {
           cout<<"U "<<j<<endl;
           ans--;
       }

    }

    }









}
