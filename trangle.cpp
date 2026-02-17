#include<iostream>
using namespace std;
int main()
{ 
    int i,j,n;
    cout<<"enter the value of n :";
    cin>>n;

    for(i=0;i<n;i++){
        //space
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //number 1
        for(j=1;j<=i+1;j++){
            cout<<j;
        }
        //number 2
        for(j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;

    }

    
    return 0;
}