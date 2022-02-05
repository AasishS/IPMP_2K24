#include<bits/stdc++.h>
using namespace std;


void computeLps(string pat, int *lps)
{
    int m=pat.length();
    int len=0,j=1;
    
    lps[0]=1;

    while(j<m)
    {
        if(pat[j]==pat[len])
        {
            len++;
            lps[j]=len;
            j++;
        }
        else
        {
           if (len != 0) 
				len = lps[len - 1];
            else{
              lps[j] = 0;
				j++;
            }
        }
    }
}


void kmp(string s1, string s2)
{
    int n= s1.length();  int m=s2.length();
    int lps[m];  

    computeLps(s2,lps);
    int i=0,j=0;
    while(i<n)
    {
       if(s2[j]== s1[i]){
           i++; j++;
       }
       if(j==m){
           cout<<"index: "<<i-j<<endl;
           j=lps[j-1];
       }
       else if(i<n && s2[j]!= s1[i])
       {
           if(j!=0)
             j= lps[j-1];
            else{
              i++; 
            }
       }
    }
}

int main()
{
    cout<<"string1: ";
    string s1;  cin>>s1;
    cout<<"string2: ";
    string s2;  cin>>s2;

    kmp(s1,s2);
}