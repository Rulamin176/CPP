#include<iostream>
using namespace std;
int main()
{ 
    int i,n;
    int fact=1;
    cout<<"enter the value of N: ";
    cin>>n;

    for(i=1;i<=n;i++){
        fact=fact*i;
    }

    cout<<"FACTORIAL OF "<< n << " is : "<<fact;

    
    return 0;
}