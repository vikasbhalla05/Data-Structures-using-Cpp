#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s="1823570";

    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    
    sort(s.begin(),s.end(),less<int>());
    cout<<s<<endl;
    return 0;
}
