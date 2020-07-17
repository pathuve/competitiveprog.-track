#include<iostream>
using namespace std;
#define ll long long
int sop(ll a,ll b)
{
	ll p=a*b,sum=0;
	while(p)
	{
	  sum=sum+p%10;
	  p=p/10;


	}
return(sum);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,temp;
		cin>>n;
		ll int arr[n];
		for(int i=0;i<n;i++)
		{
		  cin>>arr[i];

		}
		int max=0;
		for(int i=0;i<n-1;i++)
		{for(int j=i+1;j<n;j++)
		   { temp=sop(arr[i],arr[j]);
		     if(temp>=max)
		       max=temp;
		   }
		}

      cout<<max<<endl;

	}



}
