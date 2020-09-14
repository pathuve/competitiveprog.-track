// C++ program to count all subsets with
// given sum.
#include <bits/stdc++.h>
using namespace std;

// dp[i][j] is going to store true if sum j is
// possible with array elements from 0 to i.
bool** dp;

void display(const vector<long long int>& v)
{
	for (long long int i = 0; i < v.size(); ++i)
		printf("%d ", v[i]);
	printf("\n");
}

// A recursive function to print all subsets with the
// help of dp[][]. Vector p[] stores current subset.
void printSubsetsRec(long long int arr[], long long int i, long long int sum, vector<long long int>& p)
{
	// If we reached end and sum is non-zero. We print
	// p[] only if arr[0] is equal to sun OR dp[0][sum]
	// is true.
	if (i == 0 && sum != 0 && dp[0][sum])
	{
		p.push_back(arr[i]);
		display(p);
		return;
	}

	// If sum becomes 0
	if (i == 0 && sum == 0)
	{
		display(p);
		return;
	}

	// If given sum can be achieved after ignoring
	// current element.
	if (dp[i-1][sum])
	{
		// Create a new vector to store path
		vector<long long int> b = p;
		printSubsetsRec(arr, i-1, sum, b);
	}

	// If given sum can be achieved after considering
	// current element.
	if (sum >= arr[i] && dp[i-1][sum-arr[i]])
	{
		p.push_back(arr[i]);
		printSubsetsRec(arr, i-1, sum-arr[i], p);
	}
}

// Prints all subsets of arr[0..n-1] with sum 0.
void printAllSubsets(long long int arr[], long long int n, long long int sum)
{
	if (n == 0 || sum < 0)
	return;

	// Sum 0 can always be achieved with 0 elements
	dp = new bool*[n];
	for (long long int i=0; i<n; ++i)
	{
		dp[i] = new bool[sum + 1];
		dp[i][0] = true;
	}

	// Sum arr[0] can be achieved with single element
	if (arr[0] <= sum)
	dp[0][arr[0]] = true;

	// Fill rest of the entries in dp[][]
	for (long long int i = 1; i < n; ++i)
		for (long long int j = 0; j < sum + 1; ++j)
			dp[i][j] = (arr[i] <= j) ? dp[i-1][j] ||
									dp[i-1][j-arr[i]]
									: dp[i - 1][j];
	if (dp[n-1][sum] == false)
	{
		printf("There are no subsets with sum %d\n", sum);
		return;
	}

	// Now recursively traverse dp[][] to find all
	// paths from dp[n-1][sum]
	vector<long long int> p;
	printSubsetsRec(arr, n-1, sum, p);
}

// Driver code
 int main()
{
	long long int arr[] = {1,4,9,16,25,36,49};
	long long int n = sizeof(arr)/sizeof(arr[0]);
	long long int sum = (n*(n+1)*(2*n+1))/12;
	printAllSubsets(arr, n, sum);
	return 0;
}
