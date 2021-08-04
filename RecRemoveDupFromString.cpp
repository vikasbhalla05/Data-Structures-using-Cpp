#include <iostream>
#include <string>
using namespace std;

string removeDup(string s)
{
    if(s.length()==0)
        return " ";
    
    char ch=s[0];
    string ans=removeDup(s.substr(1));
    if(ch==ans[0])
        return ans;
        
    return (ch+ans);
}

int main()
{
    string str="abcadb";

    cout<<removeDup(str)<<endl;
    return 0;
}
