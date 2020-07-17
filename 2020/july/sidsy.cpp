#include <iostream>
using namespace std;
long long int sod(long long int a)
{
    long long int sum=0;
    while(a)
    {
        sum=sum+a%10;
        a=a/10;
    }
    return(sum);
}
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,chef=0,montu=0;
	    cin>>n;
	    while(n--)
	    {
	        long long int a,b,a1,b1;
	        cin>>a>>b;
	        a1=sod(a);
	        b1=sod(b);
	        if(a1>b1)
	        chef++;
	        else if(a1<b1)
	        montu++;
	        else if(a1==b1)
	        {chef++;
	         montu++;
	        }
	    }
	   if(chef>montu)
	   cout<<"0"<<" "<<chef<<endl;
	   else if(chef<montu)
	   cout<<"1"<<" "<<montu<<endl;
	   else if(chef<montu)
	   cout<<"2"<<" "<<montu<<endl;
	}
	return 0;
}

