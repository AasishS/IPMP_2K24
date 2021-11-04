#include <bits/stdc++.h>
using namespace std;

int main()
{
    //initialize 1d vector
    vector<int>v1; // size-4
    for(int i=0;i<4;i++)
      v1.push_back(i+1);
//display
    cout<<"1D vector:  ";
    for(auto i=v1.begin(); i!=v1.end(); i++)
        cout<<*i<<" ";

    //initialize 2d vector
     vector<vector<int>> v2(4,v1); //4x4 mat
     vector<vector<int>> v3(4,{3,2,1,4});
     

     cout<<"\nv2+ v3\n";
     for(int i=0;i<4;i++)
     {
         for(int j=0;j<4;j++)
          v3[i][j]= v3[i][j] + v2[i][j];
     }   
//Sum
     for(auto it: v3){
         for(auto i:it)
           cout<< i<<" ";
           cout<<endl;
     }     
     
     //initialize 3d vector
     vector<vector<vector<int>>> v4(3,v2);
 //display
     cout<<" 3D vector"<<endl;
     for(auto i:v4){
         for(auto it: i){
             cout<<"{";
             for(auto ij: it)
               cout<< ij<<" ";
             cout<<"}";
         }
         cout<<"\n\n";
     }
return 0;    
}
