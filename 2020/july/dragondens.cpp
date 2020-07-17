#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n,q;
	cin>>n>>q;

	vector<vector<long long int>>arr;
	long long int a[n],b[n];
	for(long long int i=0;i<n;i++){
	cin>>a[i];

	}
	for(long long int i=0;i<n;i++){
	cin>>b[i];}
	long long int sum=0,maxi=a[0]-1,index=0;
	for(long long int i=0;i<n;i++)
    {
        maxi=a[i]-1;
        sum=0;
        for(long long int j=i;j<n;j++)
        {
            if(a[j]>maxi)
            {

                maxi=a[j];
                index=j;
                sum=sum+b[index];
                arr[i][j]=sum;
            }
            else
             arr[i][j]=-1;

        }
    }
    for(long long int i=0;i<n;i++)
    {
        maxi=a[i]-1;
        sum=0;
        for(long long int j=i;j>=0;j--)
        {
            if(a[j]>maxi)
            {
                maxi=a[j];
                index=j;
                sum=sum+b[index];
                arr[i][j]=sum;
            }
            else
             arr[i][j]=-1;

        }
    }

    /*for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/

	while(q--)
	{
	    long long int c,s,e;
	    cin>>c>>s>>e;
	    if(c==1)
	    {
	        s--;
	        b[s]=e;
	    }
	    else if(c==2)
	    {
	        s--;
	        e--;
	        if(a[s]<=a[e]&&s!=e)
	         cout<<"-1"<<"\n";
	         else
	         {
	             long long int ans;
	             if(s>e)
                 {
	             ans=arr[e][s];
	             }
	             else if(s<e)
                 {

                 ans=arr[e][s];

                 }
                 else if(s==e)
                 ans=b[s];
	            if(ans==-1)
	            cout<<"-1"<<"\n";
	            else
	            cout<<ans<<"\n";
	         }
	    }





	}

	return 0;
}

