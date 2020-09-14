#include <bits/stdc++.h>
using namespace std;
long long int findMin(long long int arr[],long long  int n)
{
	// Calculate sum of all elements
	long long int sum = 0;
	for (long long int i = 0; i < n; i++)
		sum += arr[i];
	bool dp[n+1][sum+1];
	for (long long int i = 0; i <= n; i++)
		dp[i][0] = true;
	for (long long int i = 1; i <= sum; i++)
		dp[0][i] = false;
	for (long long int i=1; i<=n; i++)
	{
		for (long long int j=1; j<=sum; j++)
		{

			dp[i][j] = dp[i-1][j];
			if (arr[i-1] <= j)
				dp[i][j] |= dp[i-1][j-arr[i-1]];
		}
	}
	long long int diff = INT_MAX;
	for (long long int j=sum/2; j>=0; j--)
	{
		if (dp[n][j] == true)
		{
			diff = sum-2*j;
			break;
		}
	}
	return diff;
}
int main()
{
	long long int arr[100];
	long long int n = 100;
    for(long long int i=0;i<100;i++)
        arr[i]=(i+1)*(i+1);
    cout
		<< findMin(arr, n);
	return 0;
}
