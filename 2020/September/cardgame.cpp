#include<bits/stdc++.h>
using namespace std;
unsigned long long int p= 1000000007;
unsigned long long power(unsigned long long x,
                         unsigned long long int y,unsigned long long  int p)
{
    unsigned long long res = 1;

    x = x % p;

    while (y > 0) {

        if (y & 1)
            res = (res * x) % p;


        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
unsigned long long modInverse(unsigned long long n,long long int p)
{
    return power(n, p - 2, p);
}
unsigned long long nCr(unsigned long long n,
                                long long int r,long long  int p)
{

    if (r == 0)
        return 1;
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (long long int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;

    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}
int main() {
	unsigned long long int t;
	cin>>t;
	while(t--)
	{
	    unsigned long long int n;
	    unsigned long long int maxi=0;
	    cin>>n;
	    unordered_map<unsigned long long int,unsigned long long int>u;
	    for(unsigned long long int i=0;i<n;i++)
	    {
            unsigned long long int a;
	        cin>>a;
	        //cout<<(2>maxi)<<endl;
	        if(a>maxi)
	         maxi=a;
	        u[a]++;
	    }
	   unsigned long long int ans=1;
	    for(auto x:u)
	    {
	        //cout<<maxi<<endl;
	        if(x.first==maxi&&x.second%2==0)
	        {
                //cout<<nCr(x.second,x.second/2,p)<<" "<<power(2,x.second,p)<<endl;
	            ans=ans*(power(2,x.second,p)-nCr(x.second,x.second/2,p));
	        }
	        else
            {

                ans=ans*power(2,x.second,p);
	        }

	    }
	    cout<<ans%p<<endl;
	}
	return 0;
}

