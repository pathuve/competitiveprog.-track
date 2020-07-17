#include<bits/stdc++.h>
using namespace std;
int countBits(long long int number)
{

      return (int)log2(number)+1;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,c,ctr=0;
        cin>>n>>k;
        long long int arr[n];
        cin>>arr[0];
        c=arr[0];
        for(int i=1;i<n;i++)
            {cin>>arr[i];
             c=c|arr[i];
            }
        int s=countBits(c);
        long long int r=n,l=n;
        while(s--)
        {
            if( (n & (1 << s)) && ctr<k )
                {

                    ctr++;
                    n=r;
                }
            else if((n & (1 << s)) && ctr>=k)
            {
                 (l^ (1 << (s-1)));
                 cout<<"l becomes :"<<l<<endl;
                 n=r;

            }
        }
       cout<<l<<endl;
    }

}
