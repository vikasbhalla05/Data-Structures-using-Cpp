#include <iostream>
#include <queue>//queue stl
using namespace std;

class stack{
    
    int N;// length of queue
    queue<int> q1;
    queue<int> q2;
    
    public:
        stack(){
            N=0;
        }
        
        void push(int x){
            
            q2.push(x);
            N++;
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            //queue swapping
            queue<int> temp=q2;
            q2=q1;
            q1=temp;
        }
        
        void pop(){
            if(q1.empty()){
                cout<<"empty"<<endl;
                return;
            }
            q1.pop();
            N--;
        }
        
        int top(){
            return q1.front();
        }
        
        bool empty(){
            if(q1.empty()){
                return true;
            }
            return false;
        }
};

int main(){
    
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    return 0;
}
