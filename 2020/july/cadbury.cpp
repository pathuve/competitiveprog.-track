#include<bits/stdc++.h>
using namespace std;
long long int ma(long long int i,long long int j)
{
    return(i>j?i:j);
}
long long int calculate(long long int i,long long int j)
{
    long long int sum=0;
    while(i!=j){
    if(i!=j)
    {
        sum++;
        if(i==ma(i,j))
            i=i-j;
        else
            j=j-i;
    }}
    sum++;
    return(sum);



}
int main()
{
    long long int p,q,r,s,sum=0;
    cin>>p>>q>>r>>s;
    for(int i=p;i<=q;i++)
    {
        for(int j=r;j<=s;j++)
        {
            //cout<<i<<" "<<j<<"calculate(i,j)= "<<calculate(i,j)<<endl;
            sum=sum+calculate(i,j);
        }
    }
    cout<<sum;
}
