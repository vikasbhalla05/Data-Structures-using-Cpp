#include <iostream>

using namespace std;

void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n,int p){
    if(p==n+1){
        return;
    }
    cout<<p<<endl;
    inc(n,p+1);
}

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    //in decreasing order
    dec(n);
    cout<<endl;
    //in increasing order
    inc(n,1);

    return 0;
}
