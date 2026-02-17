#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"ENTER THE VALUE OF N:";
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            cout<<n <<" -THE NUMBER IS NOT PRIME NUMBER";
            break;
        }
        else
        {
            cout<<n <<" -THE NUMBER IS a PRIME NUMBER";
            break;

        }
        
    }
    return 0;

}
