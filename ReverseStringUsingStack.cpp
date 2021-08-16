#include <iostream>
#include <stack>// stack STL(standard template library)

// using namespace std;

void revString(std::string s){
    
    std::stack<std::string> st;
    
    for(int i=0;i<s.length();i++){
        // pushing words in the stack encountered <space>
        std::string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    // pulling words from the stack
    while(!st.empty()){
        std::cout<<st.top()<<" ";
        st.pop();
    }
    std::cout<<std::endl;
}

int main(){
    std::string s="Hey, how are you?";
    revString(s);
    return 0;
}
