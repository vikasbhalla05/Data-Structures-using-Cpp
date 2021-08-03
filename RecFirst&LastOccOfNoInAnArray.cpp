#include <iostream>

using namespace std;

int firstOcc(int arr[],int n,int i,int k)
{
    if(i==n)
        return -1;
    if(arr[i]==k)
        return i;
    return firstOcc(arr,n,i+1,k);
}

int lastOcc(int arr[],int n,int i,int k)
{
    if(i==n)
        return -1;
    int restArr=lastOcc(arr,n,i+1,k);
    if(restArr!=-1)
        return restArr;
    if(arr[i]==k)
        return i;
}


int main()
{   
    int arr[7]={1,2,3,4,2,3,5};
    int key;
    cin>>key;
    
    cout<<firstOcc(arr,7,0,key)<<endl;
    cout<<lastOcc(arr,7,0,key)<<endl;

    return 0;
}
