//iterators
//declaration-->vector<int>::iterator it=v.begin();
#include <bits/stdc++.h>
//functions we mostly will use inSTL:
/*
.begin()-->gives the addrees of first element
.end()-->gives the address of last element
.previous()-->gives the address of previos to the current element
.next()-->gives the adress to the next of current element
.advance(i,n)-->gives the address of nth next address of current ith index(same in case of next function also
the difference between the nex and advance is that 
necxt function returns the address while advance function modifies the value)


*/
using namespace std;

int main(){
    vector<int>v={10,20,30,40,50};
    vector<int>::iterator it=v.begin();
    cout<<(*it)<<endl;
    it++;
     cout<<(*it)<<endl;
     it++;
      cout<<(*it)<<endl;
      it=v.end();
       cout<<(*it)<<endl;
       it--;
        cout<<(*it)<<endl;

return 0;
}


// output:
// 10
// 20
// 30
// 0
// 50