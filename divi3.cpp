#include<iostream>
using namespace std;
int main()
{ 
int n;
int i;
int sum=0;
cout<<"enter the value of n :";
cin>>n;

for(i=1;i<=n;i++){
    if(i%3==0){
        sum+=i;

    }
}
        cout<<"the sum of numbers divisible by 3 is : "<<sum;


    
    return 0;
}