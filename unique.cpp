#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,1,1,1,2,2,2,2,2,3,5,6,6,6,6,7,7,8,4,4,0,0,8,8,8};
    vector<int> :: iterator it;
    //removing the duplicates 
    it= unique(v.begin(),v.end());
    // now v has became --> 1 2 3 4 5 6 7 8 4 0 8 * * * * * * * * * * * * * *
    //now resizing the vector to remove the undefined terms 
    v.resize(distance(v.begin(),it));
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
return 0;
}