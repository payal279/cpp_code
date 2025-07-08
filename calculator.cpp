#include <iostream>
using namespace std;
int main()
{
    char a;
    int n1,n2;
    cin>>n1;
    cin>>n2;
    cin>>a;
    switch(a){
        case '+':
            cout<<n1+n2;
            break;
        case '-':
            cout<<n1-n2;
            break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
            cout<<"not valid sign";
    }
    return 0;


}
