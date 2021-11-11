#include <bits/stdc++.h>
using namespace std;

// absolute value of num
unsigned int Abs(int num)
{
    int mask = num>>(sizeof(int)* 8 - 1);
    int k=0,x=0;
    k=mask+num;
    x= k ^(mask);
    return x;
}
 
int main()
{
    int n = -6;
    cout<< "Absolute value of "<<n<< ":\n  "<< Abs(n)<<"- ";
    cout<<std::bitset<16>(Abs(n));
return 0;
}