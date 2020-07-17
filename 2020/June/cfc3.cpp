#include<bits/stdc++.h>
using namespace std;
int cfc(string expr)
{
	int len = expr.length();
	if (len%2)
	return -1;
	stack<char> s;
	for (int i=0; i<len; i++)
	{
		if (expr[i]==')' && !s.empty())
		{
			if (s.top()=='(')
				s.pop();
			else
				s.push(expr[i]);
		}
		else
			s.push(expr[i]);
	}

	int parth = s.size();


	return (parth);
}
int main()
{
    long long int t;
    cin>>t;
    while(t--){long long int n;
                cin>>n;
           string ex ;
           cin>>ex;
           cout << cfc(ex)/2<<endl;




           }
return 0;
}

