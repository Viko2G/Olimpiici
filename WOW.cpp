#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int a, b, c=n, p=-1;
    bool v1[n]={false};
    for(int i=0; ; )
    {
        if(v1[i]==false && p==-1)
        {
            v1[i]=true;
            a++;
            c--;
        }
        else
        {
            a--;
            b++;
            if(p==-1)
            {
                p=v[i];
            }
        }
        i=v[i];
        if(v[i]==p)
        {
            break;
        }
    }
    cout << a << " " << b << " " << c;
    return 0;
}
