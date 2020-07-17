#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,p,r;
        cin>>n>>p;
        long long int mat[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"1"<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
                cin>>r;
                mat[i][j]=r;
            }

        }
        cout<<"2"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";

            }
           cout<<endl;
        }
        int l;
        cin>>l;



    }



}
