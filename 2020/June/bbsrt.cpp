#include<iostream>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  long long int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  long long int cont=0;
  bool swapped=true;
  while(swapped!=false)
  {
      swapped=false;
      cont++;
      for(int i=0;i<=n-2;i++)
      {
          long long c;
          if(arr[i]>arr[i+1])
          {

              c=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=c;
              swapped=true;
          }

      }

  }
  cout<<cont;

}
