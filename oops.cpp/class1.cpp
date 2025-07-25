#include <iostream>
using namespace std;
class student{
public:
    int id;
    string name;
    float marks;
    void getdata()
    {
        cout<<"id:";
        cin>>id;
        cout<<"name:";
        cin>>name;
        cout<<"marks:";
        cin>>marks;

    }
    void showdata(){
        cout<<"studentid:"<<id<<endl;
        cout<<"studentname:"<<name<<endl;
        cout<<"studentmarks:"<<marks<<endl;

    }

};
int main()
{
    student s; //classs call
    s.getdata(); //function 1 call
    s.showdata();// function 2 call
    return 0;
}