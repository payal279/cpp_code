#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    int *ptr1=&x;
    int *ptr2=&x;
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
}
// DRAWBACKS OF RAW POINTER
//MEMORY LEAKAGE
//CONFUSION OWNER


















