#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"ENTER THE VALUE OF N :";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
      
    }
    cout<<"sum of numbers= "<<sum<<endl;
    
    return 0;
}