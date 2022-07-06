#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
    
};

int main(){
     point p;
    p.x=0;
    p.y=0;
 cout<<p.x<<" "<<p.y<<endl;

    p.x=10;
    p.y=20;
    cout<<p.x<<" "<<p.y<<endl;
     return 0;
}

// difference between struct and  class is that 
// in class by default members of the class are private and we have to make them public and 
// in struct we have the data members are by default public 
// struct and class also differ in inheritance also 
