#include<iostream>
using namespace std;
int main()
{ 
    int i,j,n;
    int num=1;

    cout<<"enter the value of N : ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<i<<" ";
            
        }
        cout<<endl;
    }
    
    return 0;
}