#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int A, B, C, D;
    long long K;
    cin >> A >> B >> C >> D >> K;
    long long ans=A;
    for(long long i=0; i<K; i++)
    {
        ans=ans*B;
        if(ans<C)
        {
            cout << 0;
            return 0;
        }
        else
        {
            ans-=C;
        }
        if(ans>D)
        {
            ans=D;
            cout << ans;
            return 0;
        }
        if(ans*(B-1)==C)
        {
            cout << ans;
            return 0;
        }
    }
    cout << ans;
    return 0;
}
