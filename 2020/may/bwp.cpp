#include<iostream>
#include<math.h>
using namespace std;
long long int countBits(long long int number)
{

      return (long long int)log2(number)+1;
}
void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n/2);

    /* step 2 */
    cout << n % 2;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,f,l,m;
        cin>>x>>y>>f>>l;
        cout<<x<<" :";
        bin(x);
        cout<<endl;
        cout<<y<<" :";
        bin(y);
        cout<<endl;
        cout<<f<<" :";
        bin(f);
        cout<<endl;
        cout<<l<<" :";
        bin(l);
        cout<<endl;
        m=(x&f)*(y&f);
        for(int i=f;i<=l;i++)
        {
            if((x&i)*(y&i)>(x&m)*(y&m))
                {m=i;


                }
        }
        cout<<"ans  by brutforce::"<<m<<" ";
        bin(m);
        cout<<endl;
        long long int c=x|y;
        cout<<c<<" ";
        bin(c);
        cout<<endl;
        long long int ans1=int(pow(2,countBits(l)))-1,ans2=int(pow(2,countBits(l)-1))-1;
       ans1=ans1&c;
       ans2=ans2&c;
       cout<<"ans is before "<<ans1<<" ";
        bin(ans1);
        /*long long int k=1;
        while(ans>l)
        {

            if(ans & (1 << (k-1))==1)
            {

              ans = ans & ~(1 << (k - 1));
            }
            k++;
        }


        cout<<"Ans by my way :"<<ans<<" ";
        bin(ans);
        cout<<endl;*/
        long long int maxi=0;
        for(long long int i=0;pow(2,i)<=ans1;i++)
        {
            long long int ctr=ans1-pow(2,i);
            if((x&ctr)*(y&ctr)>=(x&maxi)*(y&maxi))
                maxi=ctr;
        }

        cout<<"now maxi is:"<<maxi;

    }


}
