#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n,K;
    cin>>n>>K;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int l=0;
    int h=n-1;
    
    while(l<h){
        if(arr[l]+arr[h]<K){
           l++; 
        }
        else if(arr[l]+arr[h]>K){
            h--;
        }
        else{
            cout<<l+1<<" "<<h+1<<endl;
            break;
        }
    }
    return 0;
}
