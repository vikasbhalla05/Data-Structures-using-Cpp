#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[],int n){
    
    int maxSum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
            continue;
        }
        maxSum=max(maxSum,sum);
    }
    return maxSum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapSum;
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    
    wrapSum=totalSum+kadane(arr,n);
    cout<<wrapSum<<endl;
    return 0;
}
