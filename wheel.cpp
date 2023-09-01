#include <bits/stdc++.h>
using namespace std;

char a[25]={0};

int main ()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    vector<char> v1(k);
    bool x=true;
    for(int i=0; i<k; i++)
    {
        cin >> v[i] >> v1[i];
    }
    int l=0;
    for(int i=k-1; i>=0; i--)
    {
        if(a[l]!=0 && a[l]!=v1[i])
        {
            x=false;
        }
        a[l]=v1[i];
        l=(l+v[i])%n;
    }
    if(x)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                cout << "?";
            }
            else
            {
                cout << a[i];
            }
        }
    }
    else
    {
        cout << "!";
    }
    return 0;
}
