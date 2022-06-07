//declaration of vectors-->

/*
06.06.22
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int > v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    //for each loop
    for(int x:v)
    {
        cout<<x<<" ";
    }
    //if you want to modify the elements of vectors using the for each loop use &x(refernce )
    //you can do in this way also 
    /*
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    */

   
    cout<<"\n";

    
return 0;
}