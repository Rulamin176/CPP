#include<iostream>
using namespace std;
int main()
{ 
    int i,j,n;

    cout<<"enter the value of N : ";
    cin>>n;

    for(i=0;i<=n-1;i++){
            char ch = 'A';
        for(j=0;j<=i;j++){
            cout<<ch;
            ch = ch + 1;

        }
        cout<<endl;
    }

    
    return 0;
}