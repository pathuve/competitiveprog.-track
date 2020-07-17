#include<bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n)
{
    int c=0,l=0;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }


     for (int p=2; p<=n; p++)
       if (prime[p])
          c++;
    cout<<c+1<<" "<<"1"<<" ";
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";
    for(int p=4;p<=n;p=p+2)
    {
            if(l==1)
            {
                break;
            }
           for(int j=p+1;j<=n;j=j+2)
           {
               if(__gcd(p, j)==1&&prime[j]==false)
                  {
                    prime[p]=true;
                    cout<<endl<<"2"<<" "<<p<<" "<<j;
                    prime[j]=true;
                    break;
                  }
                if(j==n||j==n-1)
                 {
                     l=1;

                 }

           }
    }
    for(int p=0;p<=n;p=p+2)
    {     if(prime[p]==false)
        cout<<endl<<"1"<<" "<<p;
    }
}
 int main()
{
long long int t;
cin>>t;
while(t--)
{
    long long int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1"<<endl<<"1"<<" "<<"1"<<endl;
    }
    else{
        cout<<n/2<<endl;
    SieveOfEratosthenes(n);
    cout<<endl;
    }



}


}
