#include <iostream>
#include <string>
using namespace std;

int reverse(string s)
{
    if(s.length()==0)
        return 0;
    
    /*first logic call and
    then recc call*/
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}
int main()
{
    string str="binod";
    /* fist element of the 
    reverse string*/
    reverse(str);

    return 0;
}
