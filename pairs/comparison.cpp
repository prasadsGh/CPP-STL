/*
06/06/2022
comparison of pairs-->

we will encounter many times in many problems 
where we have to create the vector od pairs, map of pairs
set of pairs

-->if you sort the vector of pairs then the it will be sorted according to the first element only 
as it compares the first element only for this operators--> >,<
same for priority queue, min heap, max heap

*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    pair<int ,int>p1{10,20},p2{20,30};
    cout<<(p1==p2)<<"\n";           //compares both values of pair
    cout<<(p1!=p2)<<"\n";           //if anyone is different then returns true value
    cout<<(p1>p2)<<"\n";            //compares first value only
    cout<<(p1<p2)<<"\n";            //compares first value only

return 0;
}


/*
OUTPUT:-->
0
1
0
1

*/