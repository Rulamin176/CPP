#include <iostream>
using namespace std;
int binaryFromdec(int dec){
    int ans=0,power=1;
    
    while(dec>0){
        int rem=dec % 2;
        dec /=2;
        
        ans+=rem*power;
        power*=10;
        
    }
    return ans;
} 


int main() 
{
    int dec;
    cout << "ENTER THE DECIMAL NUMBER  : ";
    cin>>dec;
    cout << "BINARY FORM OF THIS NUMBER IS  : "<<binaryFromdec(dec);
  
    
    return 0;
}