#include <bits/stdc++.h>
#include <string>
using namespace std;

int fact(int k)
{
    if(k<=1)
      return 1;
    else
      return k* fact(k-1);  
}
string fill( string str)
{
    string o;
    sort(str.begin(),str.end());
      o=str;

    return o;  
}
void findrank(string str)
{
    int n= str.size();
    string order= fill(str);
 //   cout<<order<<"\n";
    int count=0;
    while(!str.empty())
    {
       size_t i= order.find(str[0]); 
       string:: iterator it=find(order.begin(),order.end(),str[0]);
       order.erase(it);  //delete done elements
       
       count= count + (i *( fact(n-1))); 
       
       str= str.substr(1);
       n= str.size();
    }

    cout<<"rank = "<< count+1;
}

int main()
{
	string s;
	cout<<"Enter the string : ";	cin>>s;
    
	findrank(s);
	return 0;
}

/* using stl 

int count=1;
    sort(ans.begin(),ans.end());
 
     do 
   {
       if(ans == s){
         cout<< "x - "<<count;
         break;
           
       }
       else  
        count++; 
   } while (next_permutation(ans.begin(), ans.end()));
*/