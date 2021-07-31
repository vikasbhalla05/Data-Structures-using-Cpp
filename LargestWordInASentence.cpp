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
    for(int i=0;i<n;i++){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(count>mx){
                mx=count;
            }
            count=0;
        }
        else{
            count++;
        }
        if(arr[i]=='\0'){
            break;
        }
    }
    
    cout<<mx<<endl;

    return 0;
}
