#include <bits/stdc++.h>
using namespace std;
long long int checkmax(long long int a[],long long int b[],long long int s,long long int e)
{
    set<long long int>st;
    long long int index=e,ma=0,sum=0;
    for(int i=e;i<=s;i++)
    {
        if(a[i]>ma)
         {
             index=i;
             st.insert(index);
             ma=a[i];

         }

    }
    for(auto x:st)
    {
        sum=sum+b[x];
    }
    if(index==s)
    return(sum);
    else{
    return(-1);}
}
long long int checkmax2(long long int a[],long long int b[],long long int s,long long int e)
{
    set<long long int>st;
    long long int index=e,ma=0,sum=0;
    for(int i=e;i>=s;i--)
    {
        if(a[i]>ma)
         {
             index=i;
             st.insert(index);
             ma=a[i];

         }

    }
    for(auto x:st)
    {
        sum=sum+b[x];
    }
    if(index==s)
    return(sum);
    else{
    return(-1);}
}
int main() {
	// your code goes here
	long long int n,q;
	cin>>n>>q;
	long long int a[n],b[n];
	for(long long int i=0;i<n;i++)
	cin>>a[i];
	for(long long int i=0;i<n;i++)
	cin>>b[i];
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
	        if(a[s]<=a[e])
	         cout<<"-1"<<endl;
	         else
	         {
	             long long int ans;
	             if(s>e)
	             ans=checkmax(a,b,s,e);
	             else
                 ans=checkmax2(a,b,s,e);
	            if(ans==-1)
	            cout<<"-1"<<endl;
	            else
	            cout<<ans<<endl;
	         }
	    }





	}

	return 0;
}
