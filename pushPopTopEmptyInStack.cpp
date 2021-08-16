#include <iostream>
using namespace std;
// defining a variable globally
#define n 100

class stack{
    // dynamic array
    int* arr;
    int top;
    
    public:
        // consructor
        stack(){
            arr=new int[n];
            top=-1;
        }
        //push a value into the stack
        void push(int p){
            
            if(top==n-1){
                cout<<"Stack overflow"<<endl;
                return;
            }
            top++;
            arr[top]=p;
        }
        //taking out a value from the stack
        void pop(){
            
            if(top==-1){
                cout<<"Stack is empty"<<endl;
                return;
            }
            top--;
        }
        //accessing the top most element of the stack
        int Top(){
            
            if(top==-1){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return arr[top];
        }
        // check if the stack is empty or not
        bool empty(){
            return top==-1;
        }
};

int main()
{
    
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty();
    
    return 0;
}
