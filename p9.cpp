#include<iostream>
using namespace std;
int main()
{ 
    int i,j,n;
    char ch = 'A';


    cout<<"enter the value of N : ";
    cin>>n;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<ch;
            ch = ch + 1;

        }
        cout<<endl;
    }

    
    return 0;
}