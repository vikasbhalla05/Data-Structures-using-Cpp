#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{   
    //initialize the array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //initializing the indexing array
    const int N=1e6+2;
    int A[N];
    for(int i=0;i<N;i++){
        A[i]=-1;
    }
    
    int minIdx=INT_MAX;
    for(int i=0;i<n;i++){
        if(A[arr[i]]!=-1){
            minIdx=min(minIdx,A[arr[i]]);
        }
        else{
            A[arr[i]]=i;
        }
    }
    
    if(minIdx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minIdx+1<<endl;
    }

    return 0;
}
