#include<iostream>
#include<math.h>
using namespace std;
#define INT_BITS 16
class gfg
{


public:
uint16_t leftRotate(uint16_t n, uint16_t d)
{
    uint16_t t=(n << d)|(n >> (INT_BITS - d));


    return t;
}

/*Function to right rotate n by d bits*/
uint16_t rightRotate(uint16_t n, uint16_t d)
{
     uint16_t t = (n >> d)|(n << (INT_BITS - d));
     return t ;
}
};


int main()
{
    gfg g;
    long long int t;
    cin>>t;
    while(t--)
    {  std::uint16_t  n,m,r;
       char c;
       cin>>n>>m>>c;


       if(c=='R')
       {
           cout << g.rightRotate(n, m)<<endl;

       }
       else
       cout<<g.leftRotate(n, m)<<endl;


    }

}
