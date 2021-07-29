#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    int rs=0,cs=0,re=n-1,ce=m-1;
    while(rs<re && cs<ce){
        
        //for rs
        for(int col=cs;col<=ce;col++){
            cout<<a[rs][col]<<" ";
        }
        rs++;
        
        //for ce
        for(int row=rs;row<=re;row++){
            cout<<a[row][ce]<<" ";
        }
        ce--;
        
        //for re
        for(int col=ce;col>=cs;col--){
            cout<<a[re][col]<<" ";
        }
        re--;
        
        //for cs
        for(int row=re;row>=rs;row--){
            cout<<a[row][cs]<<" ";
        }
        cs++;
    }
    return 0;
}
