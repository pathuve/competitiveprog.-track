#include<set>
#include<iostream>
using namespace std;
int main()
{
  long long int t;
  cin>>t;

  while(t--)
  {
    long long int n,a,b;
    set<int> s;
    cin>>n>>a>>b;
    if(a==1)
     {s.insert(n);
      s.insert(a+1);
     }
     if(a==n)
     {s.insert(1);
      s.insert(n-1);
     }
    if(a!=1&&a!=n)
     { s.insert(a-1);
      s.insert(a+1);
     }
    if(b==1)
     {s.insert(n);
      s.insert(b+1);
     }
     if(b==n)
     {s.insert(1);
      s.insert(n-1);
     }
    if(b!=1&&b!=n)
     { s.insert(b-1);
      s.insert(b+1);
     }
     for(auto x:s)
     cout<<x<<" ";
     cout<<endl;
    cout<<n*(n-3)-6*(n-3)+s.size()<<endl;

  }





}
