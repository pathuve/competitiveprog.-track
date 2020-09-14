#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    unordered_map<long long int,long long int>u;
	    long long int arr[n],ans=0;
	    for(long long int i=0;i<n;i++)
	    {
	      cin>>arr[i];
	      u[arr[i]]++;
	      if(u[arr[i]]==1&&arr[i]!=0)
	        ans++;

	    }
	    cout<<ans<<endl;
	}
	return 0;
}
