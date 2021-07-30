#include <iostream>

using namespace std;

int main()
{
    int arr[4][4]={{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    
    int x;
    cin>>x;
    
    int i=3,j=0;
    while(i<4 && j<4){
        if(arr[i][j]==x){
            cout<<i+1<<" "<<j+1<<endl;
            return 0;
        }
        else if(arr[i][j]<x){
            j++;
        }
        else{
            i--;
        }
    }
    cout<<"Element Not Found"<<endl;
    return 0;
}
