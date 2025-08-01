// #include <iostream>
// using namespace std;
// int main(){
//     int a=1;
//     int b=2;
//     auto fun=[](int &a,int &b){
//         return a+b;
//     };
//     cout<<fun(a,b);
// }

#include <iostream>
using namespace std;
int main(){
    auto fun=[](int a,int b){
        return a+b;
    };
    cout<<fun(2,3);
}