#include <iostream>
using namespace std;
int binaryTOdec(int binary){
    int ans=0,power=1;
    
    while(binary>0){
        int rem=binary % 10;
        ans+=rem*power;
        binary /=10;
        power*=2;
        
    }
    return ans;
} 


int main() 
{
    int binary;
    cout << "ENTER THE BINARY NUMBER  : ";
    cin>>binary;
    cout << "DECIMAL FORM OF THIS NUMBER IS  : "<<binaryTOdec(binary);
return 0;
}