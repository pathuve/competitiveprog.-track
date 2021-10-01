#include<iostream>
#include<stdio.h>
using namespace std;
long long int countSetBits(int n)
{
    unsigned long long  int count = 0;
    while (n)
    {
      n = n & (n-1) ;
      count++;
    }
    return count;
}


int checkOdious(int n)
{
    return (countSetBits(n) % 2 == 1);
}
int main()
{
 int t;
 cin>>t;
    while(t--)
    {
        long long int n,q,e=0,o=0;
        cin>>n>>q;
        long long int arr[n];
        int arrq[q];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<q;i++)
            cin>>arrq[i];
        for(int i=0;i<q;i++)
        {

            for(int j=0;j<n;j++)
            {
                if(checkOdious((arr[j]^arrq[i])))
                {
                    o++;
                }
                else
                    e++;





            }
            cout<<e<<" "<<o<<endl;
            o=0;e=0;
        }

    }
}
