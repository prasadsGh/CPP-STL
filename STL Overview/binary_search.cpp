#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    if(binary_search(arr,arr+5,40)) cout<<"found\n";
    else cout<<"not found\n";
    if(binary_search(arr,arr+5,8)) cout<<"found\n";
    else cout<<"not found\n";
    return 0;
}

// output:
// 10 20 30 40 50 
// found
// not found