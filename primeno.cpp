#include <iostream>
using namespace std;

int primenum(int n){
  for(int i=2;i<n;i++){
    if(n%i ==0){
      return false;
    }
  
}
      return true;

}

int main() 
{
    int num;
    cout << "ENTER THE NUMBER LIMIT FORM 2 : ";
    cin>>num;
     cout<<"PRIME NUMBERS ARE : "<<endl;
    for(int i=2;i<=num;i++){
      if(primenum(i)){
        cout<<i<<endl;
      }
    }
   return 0;
}