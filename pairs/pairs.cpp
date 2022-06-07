/*
06/06/2022
NOTES:-->
a pair can be used to store two items of same or different data type 
eg-->pair of integers , time interveal, item-price 

too much useful in interviews -->many questions 
there is default constructor in pairs which initialises the value to 0,0
*/

#include <utility>
#include <iostream>
using namespace std;
int main()
{
    pair<int,int>p1(10,20);
    pair<string,int>p2("Prasad",21263);
    //another way to initialise -->
    //pair <int, int> p1;
    //p1={10,20};//reccomended
    //or p1=make_pair{10,20}; // outdated

    cout<<p1.first<<" "<<p1.second<<"\n";
    cout<<p2.first<<" "<<p2.second<<"\n";
    return 0;
}

/*

output-->
10 20
Prasad 21263
*/