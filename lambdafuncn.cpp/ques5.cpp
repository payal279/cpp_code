#include <iostream>
using namespace std;
int main(){
    int count=0;
    auto inc=[&](){
        count++;
    };
    cout<<count;
}