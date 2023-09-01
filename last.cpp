#include <bits/stdc++.h>
using namespace std;

int posCif(long long n)
{
    int ans=1;
    for(long long i=3; i<=n; i+=2)
    {
        if(i%5!=0)
        {
            ans*=i;
        }
        ans=ans%10;
    }
    return ans;
}

int main ()
{
    long long k, l, m;
    cin >> k >> l >> m;
    cout << posCif(k) << endl;
    cout << posCif(l) << endl;
    cout << posCif(m) << endl;
    return 0;
}
