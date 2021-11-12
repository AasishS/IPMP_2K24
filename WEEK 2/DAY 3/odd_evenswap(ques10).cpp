#include <bitset>
#include <bits/stdc++.h>
using namespace std;
//Odd Even bit swap
unsigned int oddevenswap(unsigned int b)
{
	int even = b & 0xAAAA; //all even bits
	int odd = b & 0x5555; //all odd bits

	even=even>>1; 
	odd=odd<<1;
	return (even|odd);
}

int main()
{
	unsigned int b =120 ;
	cout<<"giv no.\n "<<b<<"- "<<bitset<8>(b)<<endl;
	
	cout<<"After swapping\n";
	int k=oddevenswap(b);
    cout<<k<<"- "<<bitset<8>(k);
return 0;
}
