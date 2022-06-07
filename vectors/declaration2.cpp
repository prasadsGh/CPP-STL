//another  way to declare the vectors
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=3,x=10;
    vector<int> v(3,10);
    //this will create the vector of size 3 and inialise all the elements of with 10
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it<v.end();it++)
    {
        //this "it" here is nothing but the iterator-->vector<int>::iteratot it

        cout<<(*it)<<" ";
    }
    cout<<endl;

    

return 0;
}