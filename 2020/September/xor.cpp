#include<bits/stdc++.h>
using namespace std;
 int ans()	{
	long long n, answer = 0;
	cin >> n;
	vector<long long>xorsum;
	long long x;
	for(long long i=1;i<=20;i++)	{
		cout << 1 << " " << (power(2,i)) << endl;
		cout.flush();
		cin >> x;
		xorsum.push_back(x);
	}
	reverse(xorsum.begin(), xorsum.end());
	long long sum = xorsum[0]-n*power(2,20);
	for(long long i=1;i<xorsum.size();i++)	{
		if(xorsum[i] >= sum)	{
			xorsum[i] = ((n-(xorsum[i]-sum)/(power(2,xorsum.size()-i)))/2);
		}
		else
			xorsum[i] = (n+(sum-xorsum[i])/(power(2,xorsum.size()-i)))/2;
	}
	for(int i=1;i<xorsum.size();i++)
		if(xorsum[i]%2 != 0)
			answer+=power(2,xorsum.size()-i);
	if(sum%2!=0)
		answer++;
	cout << 2 << " " << answer << endl;
	cout.flush();
	int result;
	cin >> result;
	return result;
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)	{
		if(!ans())
			break;
		cout << endl;
		cout.flush();
	}
	return 0;
}
