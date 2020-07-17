#include <iostream>
using namespace std;
long long int minimumSwaps(long long int arr[],long long int n)
{

    int count = 0;
    int i = 0;

    while (i < n)
    {
        if (arr[i] != i + 1)
        {

            while (arr[i] != i + 1)
            {
                int temp = 0;
                temp = arr[arr[i] - 1];
                arr[arr[i] - 1] = arr[i];
                arr[i] = temp;
                count++;
            }
        }

        i++;
    }
    return count;
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        while(m--)
        {
            int a,b;
            cin>>a>>b;
        }

        cout << minimumSwaps(arr,n)-m<<endl;

    }




}
