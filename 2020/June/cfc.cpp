#include<iostream>
using namespace std;
int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
       long long int n,k,v=0,c=0;
       cin>>n>>k;
       char arr[n];
       for(int i=0;i<n;i++)
        cin>>arr[i];
       for(int i=0;i<n;i++)
        {
            if(arr[i]=='1')
             {
                 c=c+(v/(k+1));
                 v=0;
             }
            else
                v++;
        }
        if(c!=0)
       cout<<c<<endl;
        else if(c==0)
       cout<<n/(k+1)<<endl;
   }



}
