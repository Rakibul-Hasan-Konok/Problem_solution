//Start Coding
#include <bits/stdc++.h>
using namespace std;


int main()
{
  
  int test;
  cin>>test;
  while(test--){
   long long int n,m,sum=0;
    cin>>n>>m;
     long long int arr1[n],arr2[m];
     for(int i=0;i<n;i++){
        cin>>arr1[i];
     }
     for(int i=0;i<m;i++){       cin>>arr2[i];
     }
     for(int i=0;i<m;i++){ 
           sort(arr1,arr1+n);
           arr1[0]=arr2[i];
     }
for(int i=0;i<n;i++){ 
           
           sum=sum+arr1[i];
     }
    
cout<<sum<<endl;
  }
}

