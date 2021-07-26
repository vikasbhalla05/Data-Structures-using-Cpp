#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int maxArr(int arr[],int n){
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        m=max(arr[i],m);
        cout<<m<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    maxArr(arr,n);

    return 0;
}
