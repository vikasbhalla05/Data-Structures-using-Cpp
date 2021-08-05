#include <iostream>
#include<string>
using namespace std;

void PerString(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        
        PerString(ros,ans+ch);
    }
}

int main()
{
    PerString("ABC","");

    return 0;
}
