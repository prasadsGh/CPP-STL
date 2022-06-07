//declaration of vector using array 
//we can create one container from another by passing address of first element like v.begin() and address beyond last i.e v.end();
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={10,20,30,40};  
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);  
    //arr->address of first element 
    //arr+n-->address after last element
    //we can create many containters in this way like passing begin and end address

    //rbegin-->points to the last element
    //rend()-->points to the memory before first element
    //reverse iterator
    
    for(auto it=v.rbegin();it<v.rend();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
return 0;
}