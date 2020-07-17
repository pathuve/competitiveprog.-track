#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int arr[3]={0,0,0},cst[n],ctr=1;
        for(int i=0;i<n;i++)
         cin>>cst[i];
        for(int i=0;i<n;i++)
        {
            if(cst[i]==5)
            {
                arr[0]++;
            }
            if(cst[i]==10)
            {
                arr[1]++;
                if(arr[0]>=1)
                    arr[0]--;
                else if(arr[0]==0)
                {
                    ctr=0;
                    break;
                }
            }
            if(cst[i]==15)
            {
                arr[2]++;
                if(arr[1]>=1)
                    arr[1]--;
                else if(arr[0]>=2)
                {
                    arr[0]=arr[0]-2;
                }
                else
                {
                    ctr=0;
                    break;
                }
            }

        }
        if(ctr==0)
            cout<<"NO"<<endl;
        else if(ctr==1)
            cout<<"YES"<<endl;
    }

}
