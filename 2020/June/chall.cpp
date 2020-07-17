#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int k=300;
    char ch;
    long long int u1=n,u2=n,l1=0,l2=0;
    while(k--&&ch!='E')
    {

        if(k%2==0)
        {
            cout<<(u1+l1)/2<<endl;
            cin>>ch;
            if(ch=='L')
            {
                u1=(u1+l1)/2;
            }
            else if(ch=='G')
            {
                l1=(u1+l1)/2;
            }
            else if(ch=='E')
            {
                break;
            }

        }
        else if(k%2==1)
        {
            cout<<(u2+l2)/2<<endl;
            cin>>ch;
            if(ch=='L')
            {
                u2=(u2+l2)/2;
            }
            else if(ch=='G')
            {
                l2=(u2+l2)/2;
            }
            else if(ch=='E')
            {
                break;
            }

        }









    }


}
