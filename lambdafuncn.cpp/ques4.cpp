#include <iostream>
using namespace std;
int main(){
    int a=1;
    int b=2;
    int c=3;
    auto sum=[=](int a,int b){// if we donot pass the reference than there will be error voh read only
        ++a;
        ++b;
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    };
    sum(a,b);
}