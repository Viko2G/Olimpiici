#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b, L;
    cin >> a >> b >> L;
    bool v[L+1]={false};
    for(int i=1; i*a+b<=L; i++)
    {
        for(int j=1; i*a+j*b<=L; j++)
        {
            v[i*a+j*b]=true;
            //cout << i*a+j*b << endl;
        }
    }
    int br=L;
    for(int i=0; i<=L; i++)
    {
        if(v[i])
        {
            br--;
        }
    }
    cout << br;
    return 0;
}
