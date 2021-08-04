#include <iostream>
#include <string>
using namespace std;

void toh(int n,char src,char des,char help)
{
    if(n==0)
        return;
    toh(n-1,src,help,des);
    cout<<"Move from "<<src<<" to "<<des<<endl;
    toh(n-1,help,des,src);
}

int main()
{
    int n;
    cin>>n;
    char src='A',help='B',des='C';
    
    toh(n,src,des,help);
    return 0;
}
