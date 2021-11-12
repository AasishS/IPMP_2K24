
#include <bitset>
#include <iostream>
using namespace std;

//Swapping nibbles
int main()
{
    int b1;
    cout<<"Input: "; cin>>b1;
    cout<<"  "<<bitset<8>(b1)<<endl;
    
    int x= b1 & 0x0F;//1st part
    int y= b1 & 0xF0;   //2nd psrt
    int z=(x<<4)|(y>>4);
  
    cout<<"\nAfter nibble swapping"<<endl;
    cout<<"no: "<<z<<"- ";
    cout<<bitset<8>(z)<<endl;

 return 0;
}
