#include<iostream>
using namespace std;
void reversearray(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<end){
       int temp= arr[start];
       arr[start]=arr[end];
       arr[end]=temp;

       start++;
       end--;
    } 
}
int main()
{ 
    int arr[]={5,7,8,95,85,8,12,55};
    int size=8;
  
    reversearray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}