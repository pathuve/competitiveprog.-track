#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[100];
        int len=0;
        cin>>str;
        int i=0;
        cout<<str[i];

        while(str[i]!='\0')
        {
            len++;
            i++;

        }
        for(int i=1;i<=len-2;i=i+2)
           cout<<str[i];
        cout<<str[len-1]<<endl;


    }



}
