#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[100000];
        int c1=0,c2=1,ctr=0;
        cin>>str;
        while(str[c2]!='\0'&&str[c1]!='\0')
            {
                if(str[c1]==str[c2])
                {

                    c1++;
                    c2++;


                }
                else if(str[c1]!=str[c2])
                {

                    c1=c1+2;
                    c2=c2+2;
                    ctr++;
                }


            }
            cout<<ctr<<endl;
    }




}

