#include<iostream>
using namespace std;
int sumofn(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum+=i;

    }
            return sum;

}
int main(){
    cout<<"THE SUM OF 1 TO N IS : "<<sumofn(5)<<endl;
    cout<<"THE SUM OF 1 TO N IS : "<<sumofn(10)<<endl;


    
    return 0;
}