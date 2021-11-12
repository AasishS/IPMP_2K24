
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
     //position of right most set
int position(unsigned int n)
{
    int x= n& ~(n-1);
    return log2(x) +1;
}
int main()
{
    int x;
    cout<<"Enterr the element: "; cin>>x;
    
    cout<<"Input: "<<std::bitset<6>(x)<<endl;
    cout<<"position of rightmost set: "<<position(x);

    return 0;
}
