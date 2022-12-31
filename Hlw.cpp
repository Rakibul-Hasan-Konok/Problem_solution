#include<bits/stdc++.h>
using namespace std;
int main( )
{
    long long int t, n, x, y;
    cin >> t;
    while(t--)
    {
        cin >> n >> x>> y;
        if(((x+y) < n - 1)||(x == n && y == n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}