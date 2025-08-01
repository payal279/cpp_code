#include <iostream>
using namespace std;
int main(){
    auto fun=[](int a){
        return a*a;
    };
    cout<<fun(6);
}