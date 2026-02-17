#include<iostream>
using namespace std;
int main()
{ 
    int i,j,n;
    char ch='A';

    cout<<"enter the value of n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            cout<<ch<<" ";
            ch++;
    


        }
        cout<<endl;
    }

    
    return 0;
}