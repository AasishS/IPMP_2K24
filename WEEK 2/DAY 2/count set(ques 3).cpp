#include <iostream>
#include <bitset> 
using namespace std;

unsigned int countset(unsigned int n)
{
    unsigned int count = 0;
    while (n!=0) 
    {
        count += n & 1;
        n= n >>1;
    }
    return count;
}
 
/* Program to test function countSetBits */
int main()
{
//using logic    
    int k;
    cout<<"Enter the no: "; cin>>k;
    cout <<std::bitset<5>(k)<<": no of set - "<< countset(k)<<endl;

//in built fn
    cout<<"Enter the no: "; cin>>k;
    cout  <<std::bitset<5>(k)<<": no of set - " << __builtin_popcount(k) << endl;
return 0;
}