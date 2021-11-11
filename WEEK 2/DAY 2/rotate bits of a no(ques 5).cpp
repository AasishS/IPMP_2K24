#include<iostream>
#include <bitset> 
using namespace std;
#define count 6 //no of bits

int leftRotate(int n, unsigned int d)
{
    int k=n<< d;
    int C = (k )|(n >> (count - d));
    
    int A= 15<<(count+1);
    int B= C & (~A);  
    return B;
}
 
/*Function to right rotate n by d bits*/
int rightRotate(int n, unsigned int d)
{
    int k=n<<(count-d);
    int A= 15<<(count+1);
    int C= (n>>d)|(n << (count- d));
    int B= C & (~A);  
    return B;
}
int main()
{
    int n = 18;
    int d = 2;
    cout <<"Given no:"<<n<<"- "<<std::bitset<6>(n)<<endl;
    
    int x= leftRotate(n, d);
    cout << "Left Rotation by "<< d << " is "<<x<<": ";
    cout<<std::bitset<6>(x)<<endl;
    
    int y= rightRotate(n,d);
    cout << "Right Rotation by "<< d << " is "<<y<<": ";
    cout << std::bitset<6>(y)<<endl;
    getchar();
}