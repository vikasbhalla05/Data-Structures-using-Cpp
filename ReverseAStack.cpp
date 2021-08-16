
// reversing a stack using recursion
void insertAtBot(string<int> &st,int elem){
    
    if(st.empty()){
        st.push(elem);
        return;
    }
    
    int topel=st.top();
    st.pop();
    insertAtBot(st,topel);
    st.push(topel);
}


void revSt(stack<int> &st){
    
    if(st.empty()){
        return;
    }
    
    int elem=st.top();
    st.pop();
    revSt(st);
    
    insertAtBot(st,elem);
}
