#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
    //initialize array and sum
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6+2;
    bool checkIdx[N];
    for(int i=0;i<N;i++){
        checkIdx[i]=0;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            checkIdx[arr[i]]=1;
        }
    }
    
    int ans=-1;
    for(int i=1;i<N;i++){
        if(checkIdx[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
    
    return 0;
    
}
