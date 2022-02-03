#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter the string: ";
    string v;  int count=1,j;
    char i;
    cin>>v;

    cout<<"length encoded:\n";
    
    for(j=1;j<v.size();j++)
    {
        if( v[j]!=v[j-1]){
            cout<< v[j-1]<<count;
            count=1;
        }
        else
           count++;
    }  
        cout<<v[j-1]<<count;
}
