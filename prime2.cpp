#include<iostream>
using namespace std;
int main()
{
    int i,n;
    bool isprime=true;
    cout<<"ENTER THE VALUE OF N:";
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
        isprime=false;
        break;
        }
    }

        if(isprime==true){
            cout<<n <<" -THE NUMBER IS a PRIME NUMBER";
        }
        else
        {
            cout<<n <<" -THE NUMBER IS NOT PRIME NUMBER";
            

        }
     
    
    return 0;

}
