#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int n;
   
    cin>>n;
    vector<long long>a(n);
    long long int total=0;
    
    long long int ans = LONG_LONG_MAX;
    for(int i = 0 ; i < n ; i++)
    { 
        cin>>a[i];
        total+=a[i];
    }
    for(int mask=0; mask< (1<<n); mask++)
    {
        long long int sum=0;
        for(int i=0; i<n; i++)
        {
            if(mask>>i & 1) sum+=a[i];
        }
        long long int diff=abs((total-sum)-sum);
        ans=min(ans,diff);
    }
    cout<<ans<<endl;

    return 0;
}
