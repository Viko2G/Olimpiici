
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int dx=0, dy=1;
    int arr[100][100]= {{-1}};
    int i=0, j=0, a=0, br=0;
    while(j<m)
    {
        arr[i][j]=a+1;
        i+=dy;
        j+=dx;
        if(i==0  || i==n-1)
        {
            dx=1;
            dy=0;
            br++;
        }
        if(br==3)
        {
            br=0;
            if(i==n-1)
            {
                dy=-1;
                dx=0;
            }
            else
            {
                dy=1;
                dx=0;
            }
        }
        a++;
        if(a==k)
        {
            a=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==0)
            {
                cout << ".";
            }
            else
            {
                cout << arr[i][j]-1;
            }

        }
        cout << endl;
    }
    return 0;
}
