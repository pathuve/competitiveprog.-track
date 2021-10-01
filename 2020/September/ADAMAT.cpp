#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int arr[n][n];
	    for(long long int i=0;i<n;i++)
        {
            for(long long int j=0;j<n;j++)
                cin>>arr[i][j];
        }
	    long long int ans[n-1];
	    for(long long int i=2;i<=n;i++)
        {
            if(arr[0][i-1]!=i)
                {
                    ans[i-2]=1;
                }
            else
                ans[i-2]=0;
        }
        long long int ctr=0;


        for(long long int i=n-2;i>=0;i--)
        {
            if(ans[i]==1)
            {
                
                ctr++;
                for(long long int j=i-1;j>=0;j--)
                {

                    if(ans[j]==0)
                        ans[j]=1;
                    else
                        ans[j]=0;
                }
            }


        }
        cout<<ctr<<endl;

	}
}
