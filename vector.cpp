#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
    vector<char> vec={'a','b','c','d'};
    cout<<"size = "<<vec.size()<<endl;
    for(char val:vec){
        cout<<val<<endl;
    }
    vec.push_back('e');
    vec.push_back('f');

    cout<<"AFTER PUSH BACK SIZE IS "<<vec.size()<<endl;

    vec.pop_back();

    cout<<vec.at(4)<<endl;
cout<<"capacity is :"<<vec.capacity();




    
    return 0;
}