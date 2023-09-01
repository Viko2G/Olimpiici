#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    int n, Max=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
