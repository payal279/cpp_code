#include <iostream>
using namespace std;
int main(){
    int a=5;
    int b=10;
    auto fun=[](int a,int b){
        ++a;
        ++b;
        cout<<"inside lmbda function:"<<a<<" "<<b<<endl;
    };
    cout<<"after lmbda function:"<<a<<" "<<b<<endl;
    fun(a,b);
}



