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
   int n;
   cout << "Enter the Number :";
   cin>>n;
   cout << "The sum of mumber's Digit is :"<<sumofdigit(n);

    return 0;
}