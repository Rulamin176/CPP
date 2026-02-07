#include <iostream>
using namespace std;
int andop(int a,int b){
    return (a & b);
}
int orop(int a,int b){
    return (a | b);
}
int xorop(int a,int b){
    return (a ^ b);
}
int lshift(int a,int b){
    return (a << b);
}
int rshift(int a,int b){
    return (a >> b);
}

int main() {
    
    int a,b;
    cout<<"ENTER THE VALUE OF A : ";
    cin>>a;
    cout<<"ENTER THE VALUE OF B : ";
    cin>>b;
    cout<<"THE ANS OF THE AND OPERATION :"<<andop(a,b)<<endl;
    cout<<"THE ANS OF THE OR OPERATION :"<<orop(a,b)<<endl;
    cout<<"THE ANS OF THE XOR OPERATION :"<<xorop(a,b)<<endl;
    cout<<"THE LEFT SHIFT OF THE OPERATION :"<<lshift(a,b)<<endl;
    cout<<"THE RIGHT SHIFT OF THE OPERATION :"<<rshift(a,b)<<endl;

return 0;
}