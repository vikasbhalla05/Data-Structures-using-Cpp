// infix to postfix

#include <iostream>
#include <stack>
using namespace std;

int prec(char c){
    // checking the precedence value of the operators and giving them values
    if(c=='^'){
        return 3;
    }
    else if(c=='/' || c=='*'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixToPost(string s){
    
    stack<char> st ;
    string ans;
    
    for(int i=0;i<s.length();i++){
        
        if((s[i]>='a' && s[i]>='z') || (s[i]>='A' && s[i]>='Z')){
            ans+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            
            while(!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            if(!st.empty()){
                // removing the last ')'
                st.pop();
            }
        }
        else{
            
            while(!st.empty() && prec(s[i])<prec(st.top())){
                ans+=st.top();
                st.pop();
            }

            st.push(s[i]);
        }
    }
    // to check if anything is remaining in the stack
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;
}

int main()
{
    cout<<infixToPost("(a-b/c)*(a/k-l)");
    return 0;
}
