#include <iostream>
#include<string>
using namespace std;

bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int** arr,int x,int y,int n,int** solArr){
    
    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }
    
    if(isSafe(arr,x,y,n))
    {
        solArr[x][y]=1;
        if(ratInMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratInMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        solArr[x][y]=0; //backtracking
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    
    //Memory allocation for the maze array
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    
    //maze array inputs
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    //Memory allocation for the sol array with initialization
    int** solArr=new int*[n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[n];
        for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }
    
    //main function
    cout<<endl;
    if(ratInMaze(arr,0,0,n,solArr)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}


// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1