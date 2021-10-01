#include <bits/stdc++.h>
using namespace std;
int kFactors(int n, int k)
{

    vector<int> P;


    while (n%2 == 0)
    {
        P.push_back(2);
        n =n/2;
    }


    for (int i=3; i*i<=n; i=i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            P.push_back(i);
        }
    }


    if (n > 2)
        P.push_back(n);


    if (P.size() < k)
    {

        return(77);
    }


}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        double x,k;
        cin>>x>>k;

                if(kFactors(x, k)==77)
        cout<<"0"<<endl;
        else
        cout<<"1"<<endl;



    }







}
