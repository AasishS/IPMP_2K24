
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//Right most bit to zero
int main()
{
   int num;
   cout<<"Enter number:";  cin>>num;
   cout<<"  "<< std::bitset<8> (num)<<endl;

//logics
    int x= num &(num -1);
    cout<<"no: "<< x<<"- "<<std::bitset<8>(x)<<endl;;

//bitset   
   int count= ffs(num);  //posn
   std:: bitset<8> b=num;
   b.flip(count-1);   //flip
   cout<<"no: "<< b;
return 0;
}
