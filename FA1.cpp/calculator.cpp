#include <iostream>
using namespace std;
int main(){
    int id;
    string name;
    double salary;
    int year;
    //inputs..
    cin>>id;
    cin>>name;
    cin>>salary;
    cin>>year;
    if(year<2){
        int bonus=(5*salary)/100;
        int totalsalary= salary+bonus;
        cout<<totalsalary;
    }
    else if(year>=2||year<=5){
        int bonus=(10*salary)/100;
        int totalsalary= salary+bonus;
        cout<<totalsalary;
    }
    else{
        int bonus=(15*salary)/100;
        int totalsalary= salary+bonus;
        cout<<totalsalary;
    }
    return 0;
}