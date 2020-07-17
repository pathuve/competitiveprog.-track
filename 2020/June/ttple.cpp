#include<iostream>
using namespace std;
int checkfor1(long long int a1,long long int b1,long long int c1,long long a2,long long int b2,long long int c2)
{

  long long int a3=a1-a2,b3=b1-b2,c3=c1-c2;
  double a4,b4,c4;
  if(a1==0||b1==0||c1==0||a2==0||b2==0||c2==0)
  {
      if((a3==b3&&a3==c3))
        return(1);
   else if((a3==b3&&c1==c2))
        return(1);
   else if((c3==b3&&a1==a2))
        return(1);
   else if((a3==c3&&b1==b2))
        return(1);
   else if(a1==a2&&b1==b2)
        return(1);
   else if(a1==a2&&c1==c2)
        return(1);
   else if(c1==c2&&b1==b2)
        return(1);
    else
        return(-1);
  }
  else
    {
        a4=a2/a1;b4=b2/b1;c4=c2/c1;
        if((a3==b3&&a3==c3)||(a4==b4&&a4==c4))
        return(1);
   else if((a3==b3&&c1==c2)||(a4==b4&&c1==c2))
        return(1);
   else if((c3==b3&&a1==a2)||(c4==b4&&a1==a2))
        return(1);
   else if((a3==c3&&b1==b2)||(a4==c4&&b1==b2))
        return(1);
   else if(a1==a2&&b1==b2)
        return(1);
   else if(a1==a2&&c1==c2)
        return(1);
   else if(c1==c2&&b1==b2)
        return(1);
    else
        return(-1);
    }


}
int checkfor3(long long int a1,long long int b1,long long int c1,long long a2,long long int b2,long long int c2)
{
    long long int a3=a1-a2,b3=b1-b2,c3=c1-c2;
    double a4,b4,c4;
    if(a1==0||b1==0||c1==0||a2==0||b2==0||c2==0)
  {
       if(a3!=b3&&a3!=c3&&b3!=c3)
       return(1);
    else
        return(-1);
  }
  else
  {
    a4=a2/a1;b4=b2/b1;c4=c2/c1;
    if(a3!=b3&&a3!=c3&&b3!=c3&&a4!=b4&&a4!=c4&&b4!=c4)
       return(1);
    else
        return(-1);
  }

}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a1,b1,c1,a2,b2,c2;
        cin>>a1>>b1>>c1>>a2>>b2>>c2;
        if(a1==a2&&b1==b2&&c1==c2)
        {
           cout<<"0"<<endl;
        }

        else if(checkfor1(a1,b1,c1,a2,b2,c2)==1)
            cout<<"1"<<endl;
        else if(checkfor3(a1,b1,c1,a2,b2,c2)==1)
            cout<<"3"<<endl;
        else
            cout<<"2"<<endl;
    }



}
