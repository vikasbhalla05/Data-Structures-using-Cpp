#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    
    int count=0;
    int mx=INT_MIN;
    int st=0,maxSt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(count>mx){
                mx=count;
                maxSt=st;
            }
            count=0;
            st=i+1;
        }
        else{
            count++;
        }
        if(arr[i]=='\0'){
            break;
        }
    }
    
    cout<<mx<<endl;
    for(int i=0;i<mx;i++){
        cout<<arr[i+maxSt];
    }

    return 0;
}
