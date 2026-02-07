#include<iostream>
using namespace std;
int main()
{ 
    int num[]={5,-15,52,45,152};
    int smallest= INT8_MAX;
    int size=5;

    for(int i=0;i<=size;i++){
        if(num[i]<smallest){
            smallest=num[i];

        }

    }

        cout<<smallest;


    
    return 0;
}