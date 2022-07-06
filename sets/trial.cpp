#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[7]={5,1,2,1,4,4,4};
    set<int> a;
    
    for(int i=0;i<7;i++)
    {
       
        a.insert(arr[i]);
        
    }
    for(auto i=a.begin();i!=a.end();i++)
    cout<<(*i)<<" ";
    cout<<endl;
    return 0;
}