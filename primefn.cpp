#include<iostream>
using namespace std;
int prime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            cout<<"IT'S Not_Prime";
            break;
        }
        else{
            cout<<n;
            break;
        }

    }
    return n;
}

int main()
{
    int n; 
    cout<<"ENTER THE NUMBER :";
    cin>>n;
    cout<<endl<<"THE NUMBER IS : "<<prime(n);
    
    return 0;
}