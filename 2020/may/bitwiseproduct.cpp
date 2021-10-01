#include<iostream>
using namespace std;
#include <math.h>

unsigned long long int countBits(unsigned long long int number)
{

      return (long long int)log2(number)+1;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,z,f,l,m,ctr,ans=0,n;
        cin>>x>>y>>f>>l;
        m=(x&f)*(y&f);
        for(int i=f;i<=l;i++)
        {
            //cout<<"i:"<<i<<" m"<<(x&i)*(y&i)<<endl;

            if((x&i)==x&&(y&i)==y)
            {
               // m=(x&i)*(y&i);
               // ctr=i;
               cout<<"i:"<<i<<endl;

            }

        }
        
        n=countBits(m);
        if(x==y)
        {
            cout<<m<<endl;
        }

        else{

            ans = (((1 << (1 - 1)) - 1) ^
                ((1 << (n)) - 1));
        if(ans<l)
        cout<<ans<<endl;
        else
        cout<<(((1 << (1 - 1)) - 1) ^
                ((1 << (n-1)) - 1));


        }*/


    }




}
