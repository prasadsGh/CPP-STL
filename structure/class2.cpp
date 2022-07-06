#include <bits/stdc++.h>
//inheritence 
// Note: A derived class doesn’t inherit access to private data members.
//  However, it does inherit a full parent object,
//   which contains any private members which that class declares.

//refer the article :https://www.geeksforgeeks.org/inheritance-in-c/

using namespace std;
class management{
    public:
    int enroll_num;
    string name;
    char gender;
    string job_post;
    void getinfo();

};
class student:public management{
    string class_name;
    
   


};

class teacher:public management{
    int salary;

};
int main(){
    cout<<"STUDENT INFO::";
    student s;
    cout<<"enter the following information: \n";
    cout<<"name: ";
    cin>>s.name;
    cout<<"gender:";
     cin>>s.gender;



return 0;
}
// Note: A derived class doesn’t inherit access to private data members.
//  However, it does inherit a full parent object,
//   which contains any private members which that class declares.

//refer the article :https://www.geeksforgeeks.org/inheritance-in-c/
