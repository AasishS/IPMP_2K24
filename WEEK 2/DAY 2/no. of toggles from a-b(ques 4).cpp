#include <iostream>
#include <bitset> 
using namespace std;

void counttoggle(unsigned int x)
{
    unsigned int count=0; // initialised to prevent
    while(x!=0)                // unpredictable output
    {
        count += x &1;
        x=x>>1;
    }
    cout<<"no.of toggles: "<<count<<endl;
}
  
int main()
{
    unsigned int a,b ;
    cout<<"Enter a:"; cin>>a;
    cout<<"Enter b:"; cin>>b;
    
    cout<<"bin a: "<<std::bitset<9>(a)<<endl; //display 9 bit
    cout<<"bin b: "<<std::bitset<9>(b)<<endl; 
    
    unsigned int k= a^b;
    counttoggle(k);
    
return 0;
}