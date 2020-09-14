#include <bits/stdc++.h>
using namespace std;
float squareRoot(long long int n)
    {

        long long int x = n;
        long long int y = 1;
        float e = 0.000001; /* e decides the accuracy level*/
        while (x - y > e) {
            x = (x + y) / 2;
            y = n / x;
        }
        return x;
    }
long long int ans(long long  n)
{
	long long  sumn=(n*(n+1))/2;
	long long  reqsum=sumn/2;
	long long ans=(-1+squareRoot(-1+8*reqsum))/2;
	//cout<<ans<<endl;
	return(floor(ans));
}
long long int out(long long int give,long long n)
{

       long long int one=((n)*(n+1))/4-(give*(give+1))/2;
       if(give<=0)
        return 0;
       else if(one>n-1||one<0)
        return 0;
       else
       return min(min(min(one,n-give),give),n-one);

}
int main()
{
   // ofstream MyFile("wrong.txt");
    long long int t;
    cin>>t;
    while(t--)
    {
	long long n;
    cin>>n;

    if(int(n*(n+1))%4==0)
    {
        long long give=ans(n);
        //cout<<give<<" :"<<out(give,n)<<" "<<give-1<<" :"<<out(give-1,n)<<" "<<give+1<<" :"<<out(give+1,n)<<endl;
        cout<<out(give,n)+out(give-1,n)+out(give+1,n)<<endl;

    }
    else
     cout<<"0"<<endl;
    }
	return 0;
}
