#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
  	long long int n,ctr2=1,ctr1=0;
    cin>>n;

    long long int arr[n],temp[n-1],nakli,index=0,ma=0,mi=10000000000000000;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    while(ctr2<=n)
    {
        if(arr[ctr2]-arr[ctr2-1]<=2)
        {
            ctr2++;
        }
        else if(arr[ctr2]-arr[ctr2-1]>2)
        {
            temp[index]=ctr2-ctr1;
            index++;
            ctr1=ctr2;
            ctr2=ctr2+1;
            //if(ctr2-ctr1>=ma)
            //{
              //  ma=ctr2-ctr1;
            //}
           // else if(ctr2-ctr1<=mi)
             //   mi=ctr2-ctr1;


        }

    }
    if(ctr1==0)
    {
       cout<<n<<" "<<n<<endl;
    }
    else
    {
        sort(temp,temp+index);
        //for(int i=0;i<index;i++)
          // cout<<temp[i];
    cout<<temp[0]<<" "<<temp[index-1]<<endl;

       // cout<<temp[0]<<" "<<temp[index-1]<<endl;
    }

   // sort(temp,temp+index);
   // for(int i=0;i<index;i++)
     //   cout<<temp[i];
    //cout<<temp[0]<<" "<<temp[index-1]<<endl;

  }



}
