#include<bits/stdc++.h>
#include <stack>
using namespace std;

class que{
    
    stack<int> s1;
    
    public:
        void push(int x){
            s1.push(x);
        }
        
        int pop(){
            if(s1.empty()){
                cout<<"empty queue"<<endl;
                return -1;
            }
            int p=s1.top();
            s1.pop();
            if(s1.empty()){
                return p;
            }
            int item=pop();
            s1.push(p);
            return item;
        }
        
        bool empty(){
            if(s1.empty()){
                return true;
            }
            return false;
        }
};

int main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    
    cout<<q.empty()<<endl;
    
    return 0;
}
