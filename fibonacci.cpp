#include <iostream>
using namespace std;
void fabon(int n){
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
   
    c=a+b;
    cout<< c<<" ";
    a=b;
    b=c;
    }
    
} 


int main() 
{
    int num;
    cout << "ENTER THE NUMBER  : ";
    cin>>num;
    cout << "Fabonacci series is   : ";
    fabon(num);
    
    
    return 0;
}