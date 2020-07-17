#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,n;
        cin>>x>>y>>n;
        if(y>n%x)
        {
          cout<<((n-n%x)-(x-y))<<endl;
        }
       else if(n%x>y)
        {
            cout<<(n-(n%x-y))<<endl;
        }
        if(n%x==y)
        {
            cout<<n<<endl;
        }




    }


}
