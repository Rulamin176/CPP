#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){

        if(arr[i]==target){
            return i;
        }
    } 
    return -1;
}
int main()
{ 
    int arr[]={5,7,8,95,85,8,12,55};
    int size=8;
    int target =1112;
    cout<<linearsearch(arr,size,target);
    return 0;
}