#include<iostream>
#include <climits>
using namespace std;
int main()
{ 
    int num[5];
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    int smallest= INT_MAX;
    int size=5;
    int index;

    for(int i=0;i<=size;i++){
        if(num[i]<smallest){
            smallest=num[i];

        }
        if(smallest==num[i]){
            index=i;
        }

    }
        cout<<"SMALLEST NUMBER IS : "<<smallest<<endl;
        cout<<"the position of smallest number is : "<<index<<endl;


    
    return 0;
}