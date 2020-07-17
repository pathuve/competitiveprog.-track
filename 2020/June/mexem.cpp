#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int m,n,k,ctr=0;
	    cin>>n>>m;
	    unordered_map<long long int,long long int> u;
	    for(long long int i=0;i<n;i++)
	    {cin>>k;
	     u[k]++;
	    }
	    for(long long int i=1;i<m;i++)
	    {
	        if(u[i]==0)
	          {
	              ctr=0;
	              break;
	          }
	        else
	         {
	             ctr=ctr+u[i];

             }
	    }
	    for(auto x:u)
	    {
	        if(x.first>m+1)
	          ctr=ctr+x.second;


	    }

	    if(ctr==0)
	    cout<<-1<<endl;
	    else
	    cout<<ctr<<endl;
	}
	return 0;
}

