#include<iostream>
using namespace std;
int main()
{ 
    int i,j,n;
    cout<<"enter the value of n :";
    cin>>n;
//top
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";

        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

//bottom
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";

        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}    