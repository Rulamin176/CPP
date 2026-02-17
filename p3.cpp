#include<iostream>
using namespace std;
int main(){ 
int i,j,n;
 cout<<"Enter the value of printing loop :";
    cin>>n;

    for(i=n;i<=0;i--){
        for(j=i;j<=(n-1);j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}