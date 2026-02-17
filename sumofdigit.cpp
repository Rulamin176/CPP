#include <iostream>
using namespace std;

int sumofdigit(int num){
    int sum=0,rem;
    while(num>0){
        rem=num%10;
        num=num/10;
        
        sum+=rem;
    }
    return sum;
}

int main() {
 
    
   cout << "The sum of mumber's Digit is :"<<sumofdigit(1234);

 return 0;
}