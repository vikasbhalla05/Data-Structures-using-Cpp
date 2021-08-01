#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    string s="vikasbhalla";
    
    int a[26];
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    
    int mx=-1;
    char ans;
    
    for(int i=0;i<26;i++){
        if(mx<a[i]){
            mx=a[i];
            ans='a'+i;
        }
    }
    
    cout<<mx<<endl;
    cout<<ans<<endl;
    
    return 0;
}
