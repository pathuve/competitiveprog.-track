#include<iostream>
#include<math.h>
using namespace std;
long long int countBits(long long int number)
{

      return (long long int)log2(number)+1;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,f,l;
        cin>>x>>y>>f>>l;
        if(f==0&&x!=0&&y!=0&&l>=2*x&&l>=2*y)
        cout<<(x|y)<<endl;
        if(x==0||y==0)
        cout<<"0"<<endl;
        else
        {

            long long int c=x|y;
            long long int ans=int(pow(2,countBits(l)))-1;
            ans=ans&c;
            if(ans>l)
               {
                      long long int ans1=int(pow(2,countBits(l)))-1,ans2=int(pow(2,countBits(l)-1))-1;
                      ans1=ans1&c;
                      ans2=ans2&c;
                      long long int maxi=0;
                     for(long long int i=ans2;i<=l;i++)
                        {
                        if((x&i)*(y&i)>(x&maxi)*(y&maxi))
                            maxi=i;
                        }

                        cout<<maxi;

              }
           else if(ans<=l)
                cout<<ans<<endl;



        }


    }


}

