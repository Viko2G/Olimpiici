#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int i=1, a=1;
    for(i=1; a<n/2; i++)
    {
        a*=i;
    }
    a/=i-1;
    cout << n-((n-1)%a);
    return 0;
}

