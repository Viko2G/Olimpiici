#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;
    int br=0;
    for(int i=a; i<=b; i++)
    {
        int x=i, pr=1;
        while(x!=0)
        {
            pr*=x%10;
            x/=10;
        }
        if(pr!=0 && i%pr==0)
        {
            br++;
            cout << i << " " << pr << endl;
        }
    }
    cout << br;
    return 0;
}
