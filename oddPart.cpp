#include <bits/stdc++.h>
using namespace std;

unsigned long long int f(unsigned long long int n, unsigned long long int k)
{
    if(n<k)
    {
        return 0;
    }
    if(n==k)
    {
        return 1;
    }
    unsigned long long int ans=0;
    for(unsigned long long int i=1; i<=k; i+=2)
    {
        ans+=f(n-k, i);
        //cout << ans << " " << i << " " << n << endl;
    }
    return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int n;
    cin >> n;
    unsigned long long int ans=0;
    for(unsigned long long int i=1; i<=n; i+=2)
    {
        ans+=f(n, i);
        //cout << ans << endl;
    }
    cout << ans;
    return 0;
}
