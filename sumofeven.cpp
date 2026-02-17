#include<iostream>
using namespace std;
int main()
{ 
    int n;
    int i;
    cout<<"ENTER THE VALUE OF N :";
    cin>>n;
    int oddsum=0;
    cout<<"EVEN NUMBERS ARE  :";

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {

        oddsum +=i;
        cout<<" "<<i;


        }

    }

            cout<<endl;

    cout<<"sum of numbers= "<<oddsum<<endl;
    
    return 0;
}