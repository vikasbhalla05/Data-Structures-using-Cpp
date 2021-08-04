#include <iostream>
#include <string>
using namespace std;

string moveX(string s)
{
    if(s.length()==0)
        return "";
    
    char ch=s[0];
    string rest=moveX(s.substr(1));
    if(ch=='x')
        return (rest+'x');
        
    return (ch+rest);
}

int main()
{
    string str="axxbcx";

    cout<<moveX(str)<<endl;
    return 0;
}
