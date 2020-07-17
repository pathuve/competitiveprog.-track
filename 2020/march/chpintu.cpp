#include<iostream>
#include <unordered_map>
using namespace std;
void doe()
{ long int n,m;


unordered_map< long int, long int>dict;
    cin>>n;
  cin>>m;
   int arr1[50];
  for(long int i=0;i<n;i++)
  {
	cin>>arr1[i];
	dict.insert(pair< long int, long int>(arr1[i],0));

  }

  int arr2[50];

  for( long int i=0;i<n;i++)
  {
	cin>>arr2[i];
	dict[arr1[i]]=arr2[i]+dict[arr1[i]];

  }
  int mini=dict[1];
  unordered_map< long int, long int>::iterator p;
  for( p=dict.begin();p!=dict.end();p++)
  {
      if(mini>((*p).second))
        mini=(*p).second;
  }

  cout<<mini<<endl;

}
int main()
{
 long int t;
cin>>t;


while(t)
{
  doe();

  t--;
}





}

