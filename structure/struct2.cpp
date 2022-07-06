#include <bits/stdc++.h>
using namespace std;
struct student
{
    int rollno;
    string name;
    char gender;
    

};
int main(){
    student s={1011,"Prasad",'M'};
    cout<<s.rollno<<" "<<s.name<<" "<<s.gender<<endl;
    s.rollno=99999;
    s.name="Ramesh";
    s.gender='M';
    cout<<s.rollno<<" "<<s.name<<" "<<s.gender<<endl;
return 0;
}