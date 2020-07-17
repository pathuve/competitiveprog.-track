#include<iostream>
using namespace std;

void print(int a, int b,long int arr[])
{
    if(b-a==0)
    {
        if(a==0)
        {
            cout<<arr[a];
        }
        else
        cout<<","<<arr[a];
    }
    else if(b-a==1)
    {    if(a==0)
        {
            cout<<arr[a]<<","<<arr[b];
        }
        else
        cout<<","<<arr[a]<<","<<arr[b];
    }
    else if(b-a>1)
    {if(a==0)
        {
        cout<<arr[a]<<"..."<<arr[b];
        }
      else
        cout<<","<<arr[a]<<"..."<<arr[b];
    }





}
int main()
{
int t;
cin>>t;
 while(t--)
 {  int i,n,f=0,c=0;
   cin>>n;
   long int arr[100];
   for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(f+c<n)
      {


        if(arr[f+c]==arr[f+c+1]-1)
        {
            c++;
        }
        else
        {
            print(f,f+c,arr);
            f=f+c+1,c=0;
        }

      }
    cout<<endl;


 }
}

