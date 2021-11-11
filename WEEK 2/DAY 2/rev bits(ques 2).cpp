#include <iostream>
#include <bitset> 
using namespace std;

unsigned int rev(unsigned int num)
{
    int count=10; //for 10bits
   
    unsigned int k;
    while(count!=0)
    {
        int x=num & 1;
        k= k<<1;
        k= k|x;
        num=num>>1;
        count--;
    }
return k;
}

int main()
{
    unsigned int x = 55;
    cout<<"input: "<<std::bitset<10>(x)<<endl;
    int k=rev(x);
    
    cout<<"reversed bit:\n "<<std::bitset<10>(k)<<endl;

    return 0;
}
