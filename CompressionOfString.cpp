#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    string s="hheellllloooo";
    
    int n=s.size();
    char ans[n];
    
    ans[0]=s[0];
    int count=1;
    
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            ans[count]=s[i];
            count++;
        }
    }
    
    cout<<ans<<endl;
    
    return 0;
}
