#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    if (year <= 0)
      cout << "0"
         <<endl;
   else if (year <= 100)
      cout << "1\n";
   else if (year % 100 == 0)
      cout << year/ 100 <<endl;
   else
      cout << year/ 100 + 1 <<endl;
   
    
}