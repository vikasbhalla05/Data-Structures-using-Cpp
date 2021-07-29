#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    bool flag=false;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i+1<<" "<<j+1<<endl;
                flag=true;
                break;
            }
        }
    }
    if(flag){
        cout<<"found the element"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

    return 0;
}
