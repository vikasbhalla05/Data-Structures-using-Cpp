#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    
    cin>>arr;
    
    bool check=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            check=false;
        }
    }
    if(check){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}
