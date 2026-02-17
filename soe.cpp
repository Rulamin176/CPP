#include<iostream>
using namespace std;
int main()
{ 
    int n;
    int i=1;
    cout<<"ENTER THE VALUE OF N :";
    cin>>n;
    int oddsum=0;
    cout<<"EVEN NUMBERS ARE  :";

    while(i<=n)
    {
        if(i%2==0)
        {
        oddsum +=i;
        cout<<" "<<i;
        }
        i++;

    }

            cout<<endl;

    cout<<"sum of numbers= "<<oddsum<<endl;
    
    return 0;
}