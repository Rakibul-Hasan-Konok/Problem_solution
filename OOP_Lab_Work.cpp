#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
     cout<<(char) toupper(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]=='s') cout<<"$";
        else if(s[i]=='i') cout<<"!";
        else if(s[i]=='o') cout<<"()";
         else cout<<s[i];
    }
    cout<<"."<<endl;
    
}