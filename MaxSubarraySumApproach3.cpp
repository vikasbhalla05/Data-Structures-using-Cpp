#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    int maxSum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
            continue;
        }
        maxSum=max(sum,maxSum);
    }
    cout<<maxSum<<endl;
    return 0;
}
