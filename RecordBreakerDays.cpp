#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr[n]=-1;
    int mx=INT_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            count++;
        }
        mx=max(arr[i],mx);
    }
    cout<<count<<endl;

    return 0;
}
