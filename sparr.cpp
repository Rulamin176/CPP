#include<iostream>
using namespace std;
int sumofarr(int arr[],int size){
    int sum=0;
    int i;
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}




int main()
{ 
    int arr[]={5,15,52,45,152};
    int size=5;

    cout<<sumofarr(arr,size);


    
    return 0;
}