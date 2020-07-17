#include<iostream>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
  	long long int n,max=0,min=0,ctr=0,ctrm=0;
    cin>>n;
    min=n;
    long long int arr[n],temp[n-1];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=1;i<n;i++)
      {
      	temp[i-1]=arr[i]-arr[i-1];
      //cout<<temp[i-1]<<" ";
	  }
  	for(int i=0;i<n-1;i++)
  	{
  	  if(temp[i]<=2)
		ctr++;
	  else if(temp[i]>2)
	    ctr=0;
	  if(ctr>max)
	  {
	  	max = ctr;
	  	
	  }
	  
	   
	   	
	}
	for(int i=0;i<n-1;i++)
	{
		if(temp[i]<=2)
		ctrm++;
	  else if(temp[i]>2)
	    ctrm=0;
		if(min<ctrm&&ctrm!=0)
	  {
	  	min=ctrm;
	  	
	  }
		
	}
  	cout<<max+1<<" "<<min+1;
  }
	
	
	
}
