#include <iostream>

using namespace std;

int insertSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int j=i-1;
        while(arr[i]<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    insertSort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
