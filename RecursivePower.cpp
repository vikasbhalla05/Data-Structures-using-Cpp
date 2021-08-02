#include <iostream>

using namespace std;

int ntop(int n,int p){
    if(p==0)
        return 1;
        
    int prevp=ntop(n,p-1);
    return n*prevp;
}
int main()
{
    int n,p;
    cin>>n>>p;
    
    cout<<ntop(n,p)<<endl;

    return 0;
}
