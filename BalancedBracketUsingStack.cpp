// Valid parenthesis

#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s){
    
    int n=s.size();
    stack<char> st;
    bool ans=true;
    
    for( int i=0;i<n;i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else if(!st.empty() && s[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(!st.empty() && s[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
            else{
                ans= false;
                break;
            }
        }
        else if(!st.empty() && s[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
            else{
                ans= false;
                break;
            }
        }
    }
    if(!st.empty())
        return false;
        
    return ans;
}

int main(){
    
    string s="{[()]";
    
    if(isValid(s)){
        cout<<"Is Valid"<<endl;
    }
    else{
        cout<<"Is not Valid"<<endl;
    }
    return 0;
}
