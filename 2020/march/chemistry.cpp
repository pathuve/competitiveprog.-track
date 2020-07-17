#include<iostream>
using namespace std;
int main()
{
int ctr=0;
float a,b,c,d;
float x,y;
cin>>a>>b>>c>>d;
for(int z=1;z<100;z++)
{
    x=(z*c)/a;
    y=(z*d)/b;
    if((x-int(x)==0)&&(y-int(y)==0))
    {
        cout<<int(x)<<" "<<int(y)<<" "<<int(z);
        break;
    }
}



}
