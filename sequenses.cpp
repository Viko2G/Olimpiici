#include <bits/stdc++.h>
using namespace std;

int f(int n, int l, int r)
{
	if(l>r)
    {
		return 0;
	}
	if(n==1)
    {
		return r-l+1;
	}
	if(n>1)
    {
		return (n-2)*(r-l)+1;
	}
}

int main()
{
	int n, l, r;
  	cin >> n >> l >> r;
	cout << f(n, l, r);
	return 0;
}

